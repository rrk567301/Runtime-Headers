@class NSString, NSURL, NSArray;

@interface PKPassAuxiliaryPassInformationItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *detailFooterLeadingTitle;
@property (retain, nonatomic) NSString *detailFooterTrailingTitle;
@property (retain, nonatomic) NSString *detailFooterLeadingText;
@property (retain, nonatomic) NSString *detailFooterTrailingText;
@property (retain, nonatomic) NSURL *mapsURL;
@property (nonatomic) long long merchantCategory;
@property (retain, nonatomic) NSArray *fields;
@property (retain, nonatomic) NSArray *sections;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemInformation:(id)a0 bundle:(id)a1 privateBundle:(id)a2;
- (BOOL)_isEqualToItem:(id)a0;

@end
