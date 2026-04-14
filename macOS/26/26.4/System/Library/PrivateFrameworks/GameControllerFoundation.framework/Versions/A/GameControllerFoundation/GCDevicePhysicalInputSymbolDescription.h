@class NSString;

@interface GCDevicePhysicalInputSymbolDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *sfSymbolsName;

+ (id)symbolWithSFSymbolsName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithSFSymbolsName:(id)a0;

@end
