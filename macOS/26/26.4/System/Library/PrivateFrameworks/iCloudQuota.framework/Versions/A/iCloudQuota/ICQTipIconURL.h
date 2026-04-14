@class ICQImageURL;

@interface ICQTipIconURL : ICQTipIcon

@property (retain, nonatomic) ICQImageURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
