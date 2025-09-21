@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (char)isLocal;
- (char)isExchange;
- (id)internalDescription;
- (char)isLocalInternal;
- (long long)_accountType;
- (char)isCalDav;
- (char)isCloudBased;
- (char)isCloudKit;
- (char)isNonPrimaryCloudKit;
- (char)isPrimaryCloudKit;

@end
