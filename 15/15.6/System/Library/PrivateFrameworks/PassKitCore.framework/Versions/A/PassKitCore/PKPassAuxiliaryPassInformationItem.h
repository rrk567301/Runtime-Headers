@class PKMerchant, NSString, NSArray, NSURL;

@interface PKPassAuxiliaryPassInformationItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitle2;
@property (copy, nonatomic) NSString *detailFooterLeadingTitle;
@property (copy, nonatomic) NSString *detailFooterTrailingTitle;
@property (copy, nonatomic) NSString *detailFooterLeadingText;
@property (copy, nonatomic) NSString *detailFooterTrailingText;
@property (copy, nonatomic) NSURL *mapsURL;
@property (retain, nonatomic) PKMerchant *merchant;
@property (nonatomic) long long merchantCategory;
@property (retain, nonatomic) NSArray *fields;
@property (retain, nonatomic) NSArray *sections;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isEqualToItem:(id)a0;
- (id)initWithItemInformation:(id)a0 bundle:(id)a1 privateBundle:(id)a2 passType:(unsigned long long)a3;

@end
