@class CKContainer, CKSubscription, CKDatabase;

@interface CKSubscriptionInfo : NSObject {
    CKSubscription *_subscription;
    CKDatabase *_database;
    CKContainer *_container;
    id /* block */ _handler;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
