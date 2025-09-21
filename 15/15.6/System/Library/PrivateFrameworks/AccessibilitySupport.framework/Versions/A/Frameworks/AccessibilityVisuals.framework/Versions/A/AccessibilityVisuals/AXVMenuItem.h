@class NSString;

@interface AXVMenuItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *keyboardShortcut;
@property (nonatomic) char hasSubmenu;
@property (nonatomic) long long tag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLabel:(id)a0;
- (char)_isEqualToMenuItem:(id)a0;

@end
