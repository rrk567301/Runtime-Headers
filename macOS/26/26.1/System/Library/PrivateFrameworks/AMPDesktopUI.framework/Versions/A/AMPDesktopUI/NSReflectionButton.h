@class NSObject, ViewSpyPropsController;

@interface NSReflectionButton : NSButton

@property (weak, nonatomic) ViewSpyPropsController *targetSpy;
@property (weak, nonatomic) NSObject *targetObject;

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clicked:(id)a0;

@end
