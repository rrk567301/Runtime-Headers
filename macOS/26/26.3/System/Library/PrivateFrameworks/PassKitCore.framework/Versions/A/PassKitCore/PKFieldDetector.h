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

- (void)fieldDetectSessionDidExitField:(id)a0;
- (void)fieldDetectSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)_evaulatePersistentFieldDetectionEnablementReasons;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void)_restartFieldDetectSession;
- (void)requestPersistentFieldDetectionEnabled:(BOOL)a0 withReason:(unsigned long long)a1;
- (void)_endLookup;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)updateRadioState;
- (void)_startFieldDetectSession;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)a0;
- (void)_invalidateFieldDetectSession;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)_setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)_notify;

@end
