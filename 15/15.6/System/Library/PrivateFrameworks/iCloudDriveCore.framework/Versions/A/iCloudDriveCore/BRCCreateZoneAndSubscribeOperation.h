@class NSString, CKRecordZone, CKRecordZoneID;

@interface BRCCreateZoneAndSubscribeOperation : _BRCOperation <BRCOperationSubclass> {
    CKRecordZoneID *_zoneID;
}

@property (nonatomic) char subscriptionOnly;
@property (nonatomic) char optimisticSubscribe;
@property (copy, nonatomic) id /* block */ createZoneAndSubscribeCompletionBlock;
@property (readonly, nonatomic) CKRecordZone *createdZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (char)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)_createZoneWithZoneID:(id)a0;
- (void)_registerSubscriptionForZoneID:(id)a0 isOptimisticSubscribe:(char)a1;
- (id)initWithServerZone:(id)a0 sessionContext:(id)a1;
- (id)initWithSessionContext:(id)a0 zoneID:(id)a1;

@end
