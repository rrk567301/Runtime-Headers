@class NSArray, NSFocusController, NSString;

@interface NSFocusItemEnvironmentMenu : NSMenu <NSMenuDelegate>

@property (copy) NSArray *snapshot;
@property (retain) NSFocusController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)menuNeedsUpdate:(id)a0;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)_logSender:(id)a0;
- (id)initWithTitle:(id)a0 controller:(id)a1;

@end
