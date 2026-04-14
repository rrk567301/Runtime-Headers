@class NSNumber, NSString;

@interface MTRSoftwareDiagnosticsClusterThreadMetrics : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *id;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *stackFreeCurrent;
@property (copy, nonatomic) NSNumber *stackFreeMinimum;
@property (copy, nonatomic) NSNumber *stackSize;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
