@class NSString;

@interface NSSavePanelNameField : NSTextField

@property (copy, nonatomic) NSString *currentExtension;

- (void)setStringValue:(id)a0;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)selectNameExcludingExtension;

@end
