@class SCWindow;

@interface SCContentFilterDesktopIndependentWindowInformation : NSObject

@property (readonly, nonatomic) SCWindow *window;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (char)isEqualToSCContentFilterDesktopIndependentWindowInformation:(id)a0;

@end
