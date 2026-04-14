@class NSString;

@interface ICLAppExtensionRecord : ICLBundleRecord <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *extensionOwnerBundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithLegacyRecordDictionary:(id)a0;
- (id)legacyRecordDictionary;

@end
