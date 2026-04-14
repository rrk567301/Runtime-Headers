@class NSString;

@interface UXTabBarItemSegment : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
