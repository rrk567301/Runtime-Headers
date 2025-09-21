@class NSString, NSDictionary;

@interface ICLUninstallRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL hasParallelPlaceholder;
@property (readonly, nonatomic) NSDictionary *legacyDictionary;

+ (id)uninstallRecordArrayToDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
