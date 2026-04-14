@class SCWindow;

@interface SCContentFilterDesktopIndependentWindowInformation : NSObject

@property (readonly, nonatomic) SCWindow *window;

- (unsigned long long)hash;
- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSCContentFilterDesktopIndependentWindowInformation:(id)a0;

@end
