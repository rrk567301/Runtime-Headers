@class NSString, NSImage, NSArray, NSAlert, NSMutableArray;

@interface NSAlertController : NSObject <NSAlertDelegate> {
    NSAlert *_alert;
    NSMutableArray *_actions;
    NSString *_identifier;
}

@property long long preferredStyle;
@property (readonly) NSAlert *alert;
@property long long suppressedButtonState;
@property (copy) NSString *title;
@property (copy) NSString *message;
@property (copy) NSImage *image;
@property (readonly, copy) NSArray *actions;
@property (copy) id /* block */ helpHandler;
@property BOOL showsSuppressionButton;
@property (copy) NSString *suppressionText;
@property (getter=isSuppressed) BOOL suppressed;
@property (copy) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resetSuppressedAlertControllers;
+ (id)alertControllerWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;
+ (void)resetSuppressedAlertControllerWithIdentifier:(id)a0;
+ (BOOL)shouldSuppressAlertControllerWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)informativeText;
- (void)setInformativeText:(id)a0;
- (void)dismiss;
- (void)setMessageText:(id)a0;
- (id)_actionForModalResponse:(long long)a0;
- (void)_configureAlert:(id)a0;
- (id)_newAlert;
- (void)addAction:(id)a0;
- (BOOL)alertShowHelp:(id)a0;
- (void)beginModalForParentWindow:(id)a0;
- (id)messageText;

@end
