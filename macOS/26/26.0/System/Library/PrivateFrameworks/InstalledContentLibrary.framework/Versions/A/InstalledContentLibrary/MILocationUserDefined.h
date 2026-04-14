@class NSString, NSDictionary, NSURL;

@interface MILocationUserDefined : NSObject <MILocationProtocol, NSSecureCoding, NSCoding, NSCopying>

@property (class, nonatomic, readonly) NSString *plistTypeName;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *plistDictionary;
@property (nonatomic, readonly) NSURL *_appBundleURL;
@property (nonatomic, readonly) NSURL *appBundleURL;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppBundleURL:(id)a0 error:(id *)a1;
- (BOOL)isEqualWithLocationUserDefined:(id)a0;
- (id)initFromPlistDictionary:(id)a0 error:(id *)a1;
- (id)initWithAppBundleURLInternal:(id)a0;

@end
