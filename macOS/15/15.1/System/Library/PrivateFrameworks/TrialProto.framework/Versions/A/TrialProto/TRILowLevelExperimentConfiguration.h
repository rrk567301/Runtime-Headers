@class NSMutableArray;

@interface TRILowLevelExperimentConfiguration : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *targetedBundleIdArray;
@property (readonly, nonatomic) unsigned long long targetedBundleIdArray_Count;

+ (id)descriptor;

@end
