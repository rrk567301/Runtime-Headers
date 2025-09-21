@class NSString, NSViewController;

@interface NSPDFPanel : NSObject {
    NSString *_defaultFileName;
    id _panel;
    id _private;
}

@property (retain) NSViewController *accessoryController;
@property long long options;
@property (copy) NSString *defaultFileName;

+ (id)panel;

- (void)dealloc;
- (char)_okButtonDisabled;
- (id)_panel;
- (id)_printInfo;
- (void)_setOKButtonDisabled:(char)a0;
- (void)_setPanel:(id)a0;
- (void)_setPrintInfo:(id)a0;
- (void)beginSheetWithPDFInfo:(id)a0 modalForWindow:(id)a1 completionHandler:(id /* block */)a2;

@end
