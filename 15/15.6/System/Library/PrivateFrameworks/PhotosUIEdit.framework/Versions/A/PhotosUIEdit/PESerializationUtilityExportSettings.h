@protocol NUScalePolicy;

@interface PESerializationUtilityExportSettings : NSObject

@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;
@property (nonatomic) char applyVideoOrientationAsMetadata;

- (void).cxx_destruct;

@end
