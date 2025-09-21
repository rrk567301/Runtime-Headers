@class NSString, NSDate;

@interface TRINamespaceStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) unsigned int compatibilityVersion;
@property (readonly, nonatomic) NSDate *lastFetchAttempt;
@property (readonly, nonatomic) char lastFetchWasSuccess;

+ (id)statusFromData:(id)a0;
+ (id)statusWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 lastFetchAttempt:(id)a2 lastFetchWasSuccess:(char)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asData;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (id)copyWithReplacementLastFetchAttempt:(id)a0;
- (id)copyWithReplacementLastFetchWasSuccess:(char)a0;
- (id)copyWithReplacementNamespaceName:(id)a0;
- (id)initWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 lastFetchAttempt:(id)a2 lastFetchWasSuccess:(char)a3;
- (char)isEqualToStatus:(id)a0;

@end
