@class NSNumber;

@interface DGGNGSkinSmoothingOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputEdgeDetail;
@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void)dealloc;
- (id)init;

@end
