@class ICQImageURL;

@interface ICQTipIconURL : ICQTipIcon

@property (retain, nonatomic) ICQImageURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
