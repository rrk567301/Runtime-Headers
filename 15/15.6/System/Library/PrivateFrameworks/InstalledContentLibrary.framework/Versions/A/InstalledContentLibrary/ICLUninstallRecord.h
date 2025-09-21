@class NSString, NSDictionary;

@interface ICLUninstallRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) char isPlaceholder;
@property (nonatomic) char hasParallelPlaceholder;
@property (readonly, nonatomic) NSDictionary *legacyDictionary;

+ (id)uninstallRecordArrayToDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
