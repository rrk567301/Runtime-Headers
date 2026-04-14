@class NSString, NSImage;

@interface UXTabBarItemSegment : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSImage *symbol;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 symbol:(id)a1;
- (BOOL)isEqualToTabBarItemSegment:(id)a0;

@end
