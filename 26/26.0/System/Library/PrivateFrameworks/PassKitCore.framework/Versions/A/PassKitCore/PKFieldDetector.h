@class PKFieldProperties, NSString, PKFieldPropertiesProbe, NSHashTable, NSObject, NFFieldDetectSession;
@protocol PKFieldDetectorDelegate, OS_dispatch_queue;

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate> {
    NFFieldDetectSession *_fieldDetectSession;
    unsigned long long _fieldDetectSessionRetryCount;
    BOOL _fieldDetectSessionRequested;
    BOOL _nfcRadioEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
    unsigned long long _enablePersistentFieldDetectionReasons;
    PKFieldProperties *_fieldProperties;
    PKFieldPropertiesProbe *_fieldPropertiesProbe;
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly, weak, nonatomic) PKFieldProperties *fieldProperties;
@property (weak, nonatomic) id<PKFieldDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_notify;
- (void)unregisterObserver:(id)a0;
- (void)_startFieldDetectSession;
- (void)fieldDetectSessionDidExitField:(id)a0;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)_invalidateFieldDetectSession;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)_evaulatePersistentFieldDetectionEnablementReasons;
- (void)fieldDetectSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)updateRadioState;
- (void)_endLookup;
- (void)_restartFieldDetectSession;
- (void)setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)requestPersistentFieldDetectionEnabled:(BOOL)a0 withReason:(unsigned long long)a1;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)a0;
- (void)_setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
