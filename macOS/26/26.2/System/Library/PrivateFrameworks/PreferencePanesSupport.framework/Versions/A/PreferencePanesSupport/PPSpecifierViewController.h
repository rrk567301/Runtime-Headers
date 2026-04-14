@interface PPSpecifierViewController : NSServiceViewController <PPSpecifierExtensionNotifying>

- (void)updateView;
- (void)setPersonality:(id)a0;
- (void)setEditable:(BOOL)a0;
- (id)exportedInterface;
- (unsigned long long)awakeFromRemoteView;
- (void)didUnselect;
- (void)willSelect;
- (void)revealElementForKey:(id)a0;

@end
