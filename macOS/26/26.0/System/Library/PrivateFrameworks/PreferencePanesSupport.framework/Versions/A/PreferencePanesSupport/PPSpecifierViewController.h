@interface PPSpecifierViewController : NSServiceViewController <PPSpecifierExtensionNotifying>

- (void)updateView;
- (id)exportedInterface;
- (void)setPersonality:(id)a0;
- (void)setEditable:(BOOL)a0;
- (unsigned long long)awakeFromRemoteView;
- (void)didUnselect;
- (void)willSelect;
- (void)revealElementForKey:(id)a0;

@end
