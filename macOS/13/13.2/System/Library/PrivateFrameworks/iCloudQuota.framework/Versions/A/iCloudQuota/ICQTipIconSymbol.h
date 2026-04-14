@class NSString;

@interface ICQTipIconSymbol : ICQTipIcon

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *systemColorName;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
