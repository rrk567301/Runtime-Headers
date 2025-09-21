@class NSString, AKController;

@interface AKActionController : NSObject <NSMenuItemValidation>

@property (weak) AKController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (char)validateMenuItem:(id)a0;
- (char)validateSender:(id)a0;
- (void)performActionForSender:(id)a0;
- (void)performActionForSender:(id)a0 segment:(long long)a1;
- (char)_isSenderEnabled:(id)a0 segment:(long long)a1;
- (char)isSenderEnabled:(id)a0;
- (char)validateSender:(id)a0 segment:(long long)a1;

@end
