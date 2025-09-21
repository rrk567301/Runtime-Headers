@class NSString;

@interface AXVMenuItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *keyboardShortcut;
@property (nonatomic) BOOL hasSubmenu;
@property (nonatomic) long long tag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToMenuItem:(id)a0;

@end
