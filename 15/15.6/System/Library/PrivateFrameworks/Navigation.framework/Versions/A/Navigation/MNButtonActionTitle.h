@class GEOComposedString, NSString;

@interface MNButtonActionTitle : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) GEOComposedString *formattedTitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) int buttonDisplay;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(unsigned long long)a0 withTitle:(id)a1 buttonDisplay:(int)a2;

@end
