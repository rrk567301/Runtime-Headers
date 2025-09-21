@class NSArray, NSData;

@interface NSPConfigurationSignatureInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) unsigned long long signatureAlgorithm;

+ (void)removeFromPreferences;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromPreferences;
- (char)saveToPreferences;

@end
