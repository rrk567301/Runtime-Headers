@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (BOOL)isPrimaryCloudKit;
- (BOOL)isCalDav;
- (unsigned long long)hash;
- (BOOL)isNonPrimaryCloudKit;
- (BOOL)isLocal;
- (BOOL)isLocalInternal;
- (id)initWithType:(long long)a0;
- (id)description;
- (id)internalDescription;
- (long long)_accountType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (BOOL)isCloudBased;
- (BOOL)isCloudKit;
- (BOOL)isExchange;

@end
