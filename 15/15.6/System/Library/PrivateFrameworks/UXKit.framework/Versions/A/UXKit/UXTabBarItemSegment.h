@class NSString;

@interface UXTabBarItemSegment : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) char enabled;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (char)isEqualToTabBarItemSegment:(id)a0;

@end
