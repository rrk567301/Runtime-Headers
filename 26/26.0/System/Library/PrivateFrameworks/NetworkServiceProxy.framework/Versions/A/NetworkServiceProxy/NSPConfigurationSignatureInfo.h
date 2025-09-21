@class NSArray, NSData;

@interface NSPConfigurationSignatureInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) unsigned long long signatureAlgorithm;

+ (void)removeFromPreferences;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)saveToPreferences;
- (void)encodeWithCoder:(id)a0;
- (id)initFromPreferences;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
