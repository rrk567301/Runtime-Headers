@class NSString;

@interface WFDialogButton : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;

+ (id)cancelButton;
+ (id)doneButton;
+ (id)okButton;
+ (id)selectButton;
+ (id)startButton;
+ (id)defaultButtonWithTitle:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 style:(long long)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 style:(long long)a2;

@end
