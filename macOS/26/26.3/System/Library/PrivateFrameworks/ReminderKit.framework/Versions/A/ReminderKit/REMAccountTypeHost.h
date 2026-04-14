@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (BOOL)isLocal;
- (id)initWithType:(long long)a0;
- (BOOL)isExchange;
- (id)internalDescription;
- (BOOL)isCloudKit;
- (id)description;
- (BOOL)isLocalInternal;
- (BOOL)isNonPrimaryCloudKit;
- (BOOL)isPrimaryCloudKit;
- (BOOL)isCalDav;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)_accountType;
- (BOOL)isValid;
- (BOOL)isCloudBased;

@end
