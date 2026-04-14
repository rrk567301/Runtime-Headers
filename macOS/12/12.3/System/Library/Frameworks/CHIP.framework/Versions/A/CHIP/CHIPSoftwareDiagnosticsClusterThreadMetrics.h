@class NSNumber, NSString;

@interface CHIPSoftwareDiagnosticsClusterThreadMetrics : NSObject

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *stackFreeCurrent;
@property (retain, nonatomic) NSNumber *stackFreeMinimum;
@property (retain, nonatomic) NSNumber *stackSize;

- (id)init;
- (void).cxx_destruct;

@end
