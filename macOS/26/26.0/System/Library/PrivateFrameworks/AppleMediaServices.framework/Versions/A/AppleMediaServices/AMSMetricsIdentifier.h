@class AMSMetricsIdentifierStore, NSString, ACAccount, AMSProcessInfo;

@interface AMSMetricsIdentifier : NSObject {
    AMSMetricsIdentifierStore *_store;
}

@property (retain) ACAccount *account;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *domain;
@property double duration;

+ (void)cleanupIdentifiers;
+ (void)removeIdentifiersForAccount:(id)a0;
+ (id)clientIdKey;

- (id)init;
- (id)generateEventFields;
- (id)generateIdentifier;
- (void).cxx_destruct;

@end
