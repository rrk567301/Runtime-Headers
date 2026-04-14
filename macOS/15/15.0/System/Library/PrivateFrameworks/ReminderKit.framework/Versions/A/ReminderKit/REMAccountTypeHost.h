@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (long long)_accountType;
- (BOOL)isLocal;
- (BOOL)isExchange;
- (id)internalDescription;
- (BOOL)isLocalInternal;
- (BOOL)isCalDav;
- (BOOL)isCloudBased;
- (BOOL)isCloudKit;
- (BOOL)isNonPrimaryCloudKit;
- (BOOL)isPrimaryCloudKit;

@end
