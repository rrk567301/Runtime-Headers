@class NSError, NSUUID, NSString;

@interface ICCloudSession : NSObject {
    void /* unknown type, empty encoding */ _metrics;
    void /* unknown type, empty encoding */ _hasCompletedInitialSync;
    void /* unknown type, empty encoding */ _error;
    void /* unknown type, empty encoding */ _wasCancelled;
    void /* unknown type, empty encoding */ identifier;
    void /* function */ reason;
    void /* unknown type, empty encoding */ zoneChanges;
    void /* unknown type, empty encoding */ fetchedRecordChanges;
    void /* unknown type, empty encoding */ pushedRecordChanges;
    void /* unknown type, empty encoding */ recordTypesToIdentifiers;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ unknownRecordType;
    void /* unknown type, empty encoding */ preferredLoggingOrder;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ signPoster;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sessionSignpostID;
    void /* unknown type, empty encoding */ sessionSignpostState;
    void /* unknown type, empty encoding */ signpostIDForPhase;
    void /* unknown type, empty encoding */ signpostStateForPhase;
    void /* unknown type, empty encoding */ sessionSignpostName;
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, readonly) BOOL didPush;
@property (nonatomic) BOOL hasCompletedInitialSync;
@property (nonatomic, readonly) BOOL sessionCompletedInitialSync;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly) BOOL wasCancelled;
@property (nonatomic, readonly) BOOL hasEnded;
@property (nonatomic, readonly) BOOL hasBegun;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, weak) void /* function */ delegate;

- (id)initWithReason:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)zoneWasChanged:(id)a0;
- (void)zoneWasDeleted:(id)a0;
- (void)beginPhaseIfNeeded:(long long)a0;
- (void)beginSessionIfNeeded;
- (void)fetchedRecordWasAdded:(id)a0 type:(id)a1;
- (void)fetchedRecordWasChanged:(id)a0 type:(id)a1;
- (void)fetchedRecordWasDeleted:(id)a0 type:(id)a1;
- (void)operationEndedForPhase:(long long)a0 metrics:(id)a1 error:(id)a2;
- (void)phaseEnded:(long long)a0;
- (void)recordAdditionWasPushed:(id)a0 type:(id)a1;
- (void)recordDeletionWasPushed:(id)a0 type:(id)a1;
- (void)recordModificationWasPushed:(id)a0 type:(id)a1;
- (void)sessionCancelled;
- (void)sessionEndedWithError:(id)a0;

@end
