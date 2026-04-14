@class NSString, NSAttributedString, _TtC18AppleMediaServices24AMSPaymentExpandableInfo;

@interface AMSPaymentContentItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) struct CGImage { } *image;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *label;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (copy, nonatomic) NSString *padding;
@property (retain, nonatomic) _TtC18AppleMediaServices24AMSPaymentExpandableInfo *expandableInfo;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end
