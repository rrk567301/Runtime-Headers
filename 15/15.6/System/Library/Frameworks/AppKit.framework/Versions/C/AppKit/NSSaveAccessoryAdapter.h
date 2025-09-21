@class NSLayoutConstraint;

@interface NSSaveAccessoryAdapter : NSView

@property (retain) NSLayoutConstraint *widthConstraint;
@property (retain) NSLayoutConstraint *heightConstraint;

+ (char)_accessoryViewIsOldSchool:(id)a0;
+ (char)_constraintAccessoryViewWantsCentering:(id)a0 collapsePriority:(float)a1 constraintsCreated:(id)a2 forOpen:(char)a3;
+ (char)_oldSchoolAccessoryViewWantsCentering:(id)a0;
+ (id)adaptAccessoryIfNecessary:(id)a0 collapsePriority:(float)a1 forOpen:(char)a2;
+ (struct CGSize { double x0; double x1; })checkAllowedSize:(struct CGSize { double x0; double x1; })a0 atPriority:(float)a1 ofView:(id)a2;
+ (id)unwrapAccessoryIfNecessary:(id)a0;

- (void)dealloc;
- (id)_createHeightConstraint:(double)a0;
- (id)_createWidthConstraint:(double)a0;
- (void)_updateConstrainedSize:(struct CGSize { double x0; double x1; })a0;

@end
