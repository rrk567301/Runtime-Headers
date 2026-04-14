@class NSObject;
@protocol OS_os_log;

@interface ASMSignpost : NSObject

@property (class, readonly, nonatomic) ASMSignpost *sharedInstance;

@property (retain, nonatomic) NSObject<OS_os_log> *asmLogInstance;

- (void).cxx_destruct;
- (id)init;
- (id)asmSignpostLogger;

@end
