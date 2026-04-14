@class NSURL, NSArray;

@interface ICLAppRecord : ICLPlaceholderRecord <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *parallelPlaceholderURL;
@property (nonatomic) BOOL isUpdatedSystemApp;
@property (copy, nonatomic) NSArray *driverKitExtensionURLs;
@property (copy, nonatomic) NSArray *stashedVersions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithLegacyRecordDictionary:(id)a0;
- (id)legacyRecordDictionary;

@end
