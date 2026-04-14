@class AMSMetricsIdentifierStore, NSString, ACAccount, AMSProcessInfo;

@interface AMSMetricsIdentifier : NSObject {
    AMSMetricsIdentifierStore *_store;
}

@property (retain) ACAccount *account;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *domain;
@property double duration;

+ (void)removeIdentifiersForAccount:(id)a0;
+ (void)cleanupIdentifiers;
+ (id)clientIdKey;

- (void).cxx_destruct;
- (id)init;
- (id)generateEventFields;
- (id)generateIdentifier;

@end
