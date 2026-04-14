@class NSObject, NSViewSpy;

@interface ItemReflectionButton : NSButton

@property (weak, nonatomic) NSViewSpy *targetDisplay;
@property (weak, nonatomic) NSObject *targetObject;
@property (nonatomic) BOOL canNavigateTo;
@property (nonatomic) BOOL canNavigateToValid;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)clicked:(id)a0;

@end
