@class GEOComposedString;

@interface MNNavigationAlertButtonInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) GEOComposedString *formattedTitle;
@property (readonly, nonatomic) int buttonDisplay;
@property (readonly, nonatomic) BOOL isDefaultButton;

- (void)encodeWithCoder:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(unsigned long long)a0 title:(id)a1 buttonDisplay:(int)a2 isDefaultButton:(BOOL)a3;

@end
