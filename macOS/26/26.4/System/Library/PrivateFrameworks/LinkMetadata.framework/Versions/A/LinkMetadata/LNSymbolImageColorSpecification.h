@class LNSystemNamedColor, NSData, NSString;

@interface LNSymbolImageColorSpecification : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNSystemNamedColor *systemNamedColor;
@property (readonly, nonatomic) NSData *platformSpecificData;
@property (readonly, nonatomic) NSString *platform;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPlatformSpecificData:(id)a0 platform:(id)a1;
- (id)initWithSystemNamedColor:(id)a0;

@end
