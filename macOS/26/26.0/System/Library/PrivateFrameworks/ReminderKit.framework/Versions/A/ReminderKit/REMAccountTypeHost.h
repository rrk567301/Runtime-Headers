@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (BOOL)isValid;
- (id)initWithType:(long long)a0;
- (long long)_accountType;
- (BOOL)isCloudKit;
- (BOOL)isPrimaryCloudKit;
- (BOOL)isLocalInternal;
- (BOOL)isCloudBased;
- (id)internalDescription;
- (id)description;
- (BOOL)isNonPrimaryCloudKit;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isExchange;
- (BOOL)isCalDav;
- (BOOL)isLocal;
- (void).cxx_destruct;

@end
