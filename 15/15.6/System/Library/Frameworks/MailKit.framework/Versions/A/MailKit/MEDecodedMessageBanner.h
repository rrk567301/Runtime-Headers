@class NSString;

@interface MEDecodedMessageBanner : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *primaryActionTitle;
@property (readonly, nonatomic, getter=isDismissable) char dismissable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 primaryActionTitle:(id)a1 dismissable:(char)a2;

@end
