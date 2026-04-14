@class NSString, TUHandle, NSObject;
@protocol OS_dispatch_queue, SATelephonyDelegateProtocol;

@interface SATelephonyManager : NSObject

@property (nonatomic) BOOL callInProgress;
@property (nonatomic) BOOL callFailed;
@property (retain, nonatomic) TUHandle *callHandle;
@property (retain, nonatomic) NSString *callUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callQueue;
@property (weak, nonatomic) id<SATelephonyDelegateProtocol> delegate;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_callStatusChanged:(id)a0;
- (void)placeVoiceCall:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_currentCallEqualsCall:(id)a0;
- (void)_currentCallEnded;
- (void)_canPlaceNewCall:(id /* block */)a0;

@end
