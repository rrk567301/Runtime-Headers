@class NSString, NSMutableDictionary;

@interface CKDialog : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *buttonActions;
@property char kind;
@property (copy) NSString *messageText;
@property (copy) NSString *informativeText;
@property char defaultButton;
@property (copy) NSString *okButtonTitle;
@property (copy) NSString *cancelButtonTitle;
@property (copy) NSString *otherButtonTitle;
@property (copy) NSString *checkboxTitle;
@property BOOL checkboxChecked;
@property BOOL showsHelp;
@property (copy) NSString *helpAnchor;

+ (id)_dialogFromResponseDictionary:(id)a0;
+ (id)dialogWithError:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)actionForButton:(char)a0;
- (void)setAction:(id)a0 forButton:(char)a1;

@end
