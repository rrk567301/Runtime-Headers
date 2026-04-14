@class NSString, NSImage;

@interface UXTabBarItemSegment : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSImage *symbol;

- (id)initWithTitle:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 symbol:(id)a1;
- (BOOL)isEqualToTabBarItemSegment:(id)a0;

@end
