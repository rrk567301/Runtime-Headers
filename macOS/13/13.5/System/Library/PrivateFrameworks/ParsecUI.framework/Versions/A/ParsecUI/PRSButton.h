@class SFPunchout;

@interface PRSButton : NSButton

@property (retain, nonatomic) SFPunchout *punchout;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (BOOL)isAccessibilityElement;

@end
