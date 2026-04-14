@interface SPIPowerLogger : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned char process;

- (id)init;
- (id)initWithCurrentProcess;
- (id)initWithProcessIdentifier:(int)a0;
- (id)captureSnapshot;

@end
