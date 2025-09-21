@interface SnapshotTimer : NSObject

@property (nonatomic) char taskIsComplete;

+ (void)takeSnapshotForTask:(id)a0;

- (id)init;
- (void)checkout;
- (void)checkinWithTimeout:(double)a0 forTask:(id)a1;

@end
