@class NSNumber;

@interface DGGNGNoiseOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputEdgeDetail;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;

@end
