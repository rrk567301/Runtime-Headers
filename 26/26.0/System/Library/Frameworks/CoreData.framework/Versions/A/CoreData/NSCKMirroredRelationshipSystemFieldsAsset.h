@class NSString, NSCKMirroredRelationship;

@interface NSCKMirroredRelationshipSystemFieldsAsset : NSCKMetadataAsset

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSCKMirroredRelationship *mirroredRelationship;

@end
