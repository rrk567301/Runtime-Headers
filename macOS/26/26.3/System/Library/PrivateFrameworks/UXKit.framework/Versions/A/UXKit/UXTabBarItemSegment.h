@class NSString, NSImage;

@interface UXTabBarItemSegment : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSImage *symbol;

- (id)initWithTitle:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 symbol:(id)a1;
- (BOOL)isEqualToTabBarItemSegment:(id)a0;

@end
