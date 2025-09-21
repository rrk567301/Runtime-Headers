@class NSString;

@interface TCOfficeFontInfo : NSObject

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) char isBold;
@property (readonly, nonatomic) char isItalic;

+ (id)officeFontInfoWithFullName:(id)a0 isBold:(char)a1 isItalic:(char)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFullName:(id)a0 isBold:(char)a1 isItalic:(char)a2;
- (id)officeName;

@end
