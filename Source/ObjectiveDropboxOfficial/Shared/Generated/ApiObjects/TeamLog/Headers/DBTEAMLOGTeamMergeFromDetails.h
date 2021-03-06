///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTeamMergeFromDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMergeFromDetails` struct.
///
/// Merged another team into this team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMergeFromDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The name of the team that was merged into this team.
@property (nonatomic, readonly, copy) NSString *teamName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamName The name of the team that was merged into this team.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamName:(NSString *)teamName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamMergeFromDetails` struct.
///
@interface DBTEAMLOGTeamMergeFromDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMergeFromDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGTeamMergeFromDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeFromDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGTeamMergeFromDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamMergeFromDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeFromDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGTeamMergeFromDetails` object.
///
+ (DBTEAMLOGTeamMergeFromDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
