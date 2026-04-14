@class CKContainer, NSString, CKDatabase;

@interface CKSubscriptionInfo : NSObject {
    CKDatabase *_database;
    CKContainer *_container;
    NSString *_environment;
    id /* block */ _idHandler;
    NSString *_subscriptionID;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
