@class NSString, BSAtomicSignal, PFTActivity;

@interface _PFTActivitySentinel : NSObject <PFTActivityTracking> {
    struct os_activity_scope_state_s { unsigned long long opaque[2]; } _state;
    BSAtomicSignal *_invalidationSignal;
}

@property (readonly, nonatomic) PFTActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
