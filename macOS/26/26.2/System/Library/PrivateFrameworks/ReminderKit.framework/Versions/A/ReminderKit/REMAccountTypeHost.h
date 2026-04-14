@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (long long)_accountType;
- (BOOL)isCloudBased;
- (BOOL)isPrimaryCloudKit;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCalDav;
- (BOOL)isCloudKit;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)isExchange;
- (id)description;
- (BOOL)isNonPrimaryCloudKit;
- (id)internalDescription;
- (BOOL)isLocalInternal;
- (BOOL)isLocal;

@end
