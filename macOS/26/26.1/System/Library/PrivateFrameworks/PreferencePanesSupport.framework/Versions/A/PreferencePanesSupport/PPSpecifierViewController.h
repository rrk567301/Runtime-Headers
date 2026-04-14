@interface PPSpecifierViewController : NSServiceViewController <PPSpecifierExtensionNotifying>

- (void)updateView;
- (void)setPersonality:(id)a0;
- (id)exportedInterface;
- (void)setEditable:(BOOL)a0;
- (unsigned long long)awakeFromRemoteView;
- (void)didUnselect;
- (void)willSelect;
- (void)revealElementForKey:(id)a0;

@end
