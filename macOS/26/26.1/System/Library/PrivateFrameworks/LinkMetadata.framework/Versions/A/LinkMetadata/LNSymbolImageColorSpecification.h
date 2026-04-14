@class LNSystemNamedColor, NSData, NSString;

@interface LNSymbolImageColorSpecification : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNSystemNamedColor *systemNamedColor;
@property (readonly, nonatomic) NSData *platformSpecificData;
@property (readonly, nonatomic) NSString *platform;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlatformSpecificData:(id)a0 platform:(id)a1;
- (id)initWithSystemNamedColor:(id)a0;

@end
