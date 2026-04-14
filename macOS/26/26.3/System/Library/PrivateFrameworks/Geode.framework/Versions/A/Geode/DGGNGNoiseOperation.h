@class NSNumber;

@interface DGGNGNoiseOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputEdgeDetail;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (id)_filter;
- (void)dealloc;

@end
