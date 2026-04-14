@class NSMenuItem;

@interface WKPDFMenuTarget : NSObject {
    NSMenuItem *_selectedMenuItem;
}

- (id)init;
- (void)contextMenuAction:(id)a0;
- (id)selectedMenuItem;

@end
