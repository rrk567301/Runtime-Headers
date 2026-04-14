@class CKContainer, NSString, CKDatabase;

@interface CKSubscriptionInfo : NSObject {
    CKDatabase *_database;
    CKContainer *_container;
    NSString *_environment;
    id /* block */ _idHandler;
    NSString *_subscriptionID;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
