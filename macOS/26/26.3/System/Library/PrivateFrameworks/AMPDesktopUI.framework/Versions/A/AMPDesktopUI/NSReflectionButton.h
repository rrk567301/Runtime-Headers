@class NSObject, ViewSpyPropsController;

@interface NSReflectionButton : NSButton

@property (weak, nonatomic) ViewSpyPropsController *targetSpy;
@property (weak, nonatomic) NSObject *targetObject;

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clicked:(id)a0;

@end
