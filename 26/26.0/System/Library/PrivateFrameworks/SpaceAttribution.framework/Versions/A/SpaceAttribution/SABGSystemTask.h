@class BGSystemTask;

@interface SABGSystemTask : NSObject

@property (retain) BGSystemTask *task;
@property (readonly) BOOL shouldDefer;

+ (id)newWithBGTask:(id)a0;

- (void)deferTask;
- (void).cxx_destruct;
- (id)initWithBGTask:(id)a0;

@end
