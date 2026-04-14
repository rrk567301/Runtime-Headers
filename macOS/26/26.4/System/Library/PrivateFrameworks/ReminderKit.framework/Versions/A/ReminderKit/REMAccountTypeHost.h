@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (BOOL)isLocalInternal;
- (id)initWithType:(long long)a0;
- (BOOL)isCloudBased;
- (BOOL)isLocal;
- (BOOL)isValid;
- (BOOL)isNonPrimaryCloudKit;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPrimaryCloudKit;
- (BOOL)isCloudKit;
- (void).cxx_destruct;
- (id)internalDescription;
- (unsigned long long)hash;
- (BOOL)isCalDav;
- (id)description;
- (BOOL)isExchange;
- (long long)_accountType;

@end
