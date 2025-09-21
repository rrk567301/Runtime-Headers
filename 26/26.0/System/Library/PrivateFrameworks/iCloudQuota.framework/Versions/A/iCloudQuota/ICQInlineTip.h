@class ICQTipIcon, NSArray, NSString, ICQTipCriteria, NSURL;

@interface ICQInlineTip : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *upwardArrowConfigurationStrings;
@property (class, readonly, nonatomic) NSArray *downwardArrowConfigurationStrings;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) ICQTipIcon *icon;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) ICQTipCriteria *criteria;
@property (copy, nonatomic) NSString *arrowConfiguration;
@property (retain, nonatomic) NSURL *dismissURL;
@property (retain, nonatomic) NSURL *displayURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
