@class NSString, BGSystemTask, NSObject;
@protocol OS_os_log;

@interface ATXBackgroundSystemTask : NSObject <ATXBackgroundActivityProtocol>

@property (retain, nonatomic) BGSystemTask *bgSystemTask;
@property (nonatomic) BOOL taskDeferred;
@property (retain, nonatomic) NSObject<OS_os_log> *handle;
@property (nonatomic) unsigned char currentProgressUnits;
@property (nonatomic) BOOL taskExpiryCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDefer;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setDone;
- (BOOL)didDefer;
- (id)initWithBackgroundSystemTask:(id)a0;
- (id)initWithBackgroundSystemTask:(id)a0 logHandle:(id)a1;
- (void)setProgressUnits:(unsigned char)a0;

@end
