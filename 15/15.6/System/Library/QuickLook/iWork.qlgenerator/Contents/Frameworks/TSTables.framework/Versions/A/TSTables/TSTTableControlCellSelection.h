@interface TSTTableControlCellSelection : TSKSelection

@property (readonly, nonatomic, getter=isKeyboardShown) char keyboardShown;

+ (Class)archivedSelectionClass;
+ (id)controlCellSelection;

- (id)copy;
- (id)initWithKeyboardShown:(char)a0;

@end
