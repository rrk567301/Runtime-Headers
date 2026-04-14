@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (long long)_accountType;
- (BOOL)isLocal;
- (BOOL)isExchange;
- (id)internalDescription;
- (BOOL)isCloudKit;
- (BOOL)isCloudBased;
- (BOOL)isPrimaryCloudKit;
- (BOOL)isNonPrimaryCloudKit;
- (BOOL)isCalDav;
- (BOOL)isLocalInternal;

@end
