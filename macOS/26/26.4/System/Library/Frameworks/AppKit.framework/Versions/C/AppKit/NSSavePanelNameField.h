@class NSString;

@interface NSSavePanelNameField : NSTextField

@property (copy, nonatomic) NSString *currentExtension;

- (BOOL)becomeFirstResponder;
- (void)setStringValue:(id)a0;
- (void).cxx_destruct;
- (void)selectNameExcludingExtension;

@end
