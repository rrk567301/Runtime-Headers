@class NSSet, NSDictionary;

@interface BWSecureMetadataOutputConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL objectDetectionEnabled;
@property (copy, nonatomic) NSSet *enabledDetectedObjectTypes;
@property (nonatomic) BOOL attentionDetectionEnabled;
@property (nonatomic) float objectDetectionTargetFrameRate;
@property (nonatomic) BOOL eyeReliefStatusDetectionEnabled;
@property (readonly, nonatomic) NSDictionary *metadataOutputConfigurationDictionary;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
