@class NSString, NSDocumentController;

@interface NSDocumentControllerSubMenuDelegate : NSObject <NSMenuDelegate> {
    NSDocumentController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)menuDidClose:(id)a0;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (id)initWithController:(id)a0;

@end
