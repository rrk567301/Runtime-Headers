@class NSString, NSDictionary, BGSystemTask, NSMutableDictionary, NSObject, NSDate;
@protocol OS_os_log;

@interface ATXBackgroundSystemTask : NSObject <ATXBackgroundActivityProtocol>

@property (retain, nonatomic) BGSystemTask *bgSystemTask;
@property (nonatomic) BOOL taskDeferred;
@property (retain, nonatomic) NSObject<OS_os_log> *handle;
@property (nonatomic) unsigned char currentProgressUnits;
@property (nonatomic) BOOL taskExpiryCalled;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) NSMutableDictionary *resultStatus;
@property (retain, nonatomic) NSDate *jobCreationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDefer;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setDone;
- (BOOL)didDefer;
- (BOOL)_didDeferForTestMode;
- (BOOL)_setDoneForTestMode;
- (void)_setProgressUnitsForTestMode:(unsigned char)a0;
- (id)initForTestingWithIdentifier:(id)a0 configuration:(id)a1;
- (id)initWithBackgroundSystemTask:(id)a0;
- (id)initWithBackgroundSystemTask:(id)a0 logHandle:(id)a1;
- (id)resultStatusForJob;
- (void)setProgressUnits:(unsigned char)a0;

@end
