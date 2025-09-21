@interface VUISharingServicePicker : NSSharingServicePicker

@property (copy, nonatomic) id /* block */ didDismissShareSheetBlock;
@property (nonatomic) BOOL showSharePlay;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;

@end
