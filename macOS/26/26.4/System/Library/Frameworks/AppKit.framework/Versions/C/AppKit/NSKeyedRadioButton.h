@class NSString, NSUserDefaultsController, NSTextField;

@interface NSKeyedRadioButton : NSButton {
    NSString *_description;
    NSTextField *_descriptionField;
}

@property (copy) NSString *keyPath;
@property (retain) id valueToSet;
@property (retain) NSUserDefaultsController *userDefaultsController;

- (void)setState:(long long)a0;
- (void)dealloc;
- (void)_updateDescriptionIfNecessary;
- (void)activateRadioAction:(id)a0;
- (void)useDescription:(id)a0 displayedOn:(id)a1;

@end
