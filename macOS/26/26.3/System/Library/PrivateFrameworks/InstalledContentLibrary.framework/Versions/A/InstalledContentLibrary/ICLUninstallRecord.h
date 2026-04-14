@class MIAppIdentity, NSDictionary;

@interface ICLUninstallRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) MIAppIdentity *identity;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL hasParallelPlaceholder;
@property (readonly, nonatomic) NSDictionary *legacyDictionary;

+ (id)uninstallRecordArrayToDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
