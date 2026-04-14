@class NSString, AKController;

@interface AKActionController : NSObject <NSMenuItemValidation>

@property (weak) AKController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateMenuItem:(id)a0;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (BOOL)validateSender:(id)a0;
- (void)performActionForSender:(id)a0;
- (void)performActionForSender:(id)a0 segment:(long long)a1;
- (BOOL)_isSenderEnabled:(id)a0 segment:(long long)a1;
- (BOOL)isSenderEnabled:(id)a0;
- (BOOL)validateSender:(id)a0 segment:(long long)a1;

@end
