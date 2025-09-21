@class NSString;
@protocol NFFieldDetectSessionDelegate;

@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks> {
    id<NFFieldDetectSessionDelegate> _delegate;
    char _fieldNotificationSent;
    char _fieldPresent;
    BOOL _detectFieldCallback;
    BOOL _exitFieldCallback;
    BOOL _enterFieldCallback;
    BOOL _detectTechnologyCallback;
}

@property id<NFFieldDetectSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didDetectField:(char)a0;
- (void)didDetectFieldNotification:(id)a0;
- (void)didEndUnexpectedly;
- (BOOL)isTimeLimited;

@end
