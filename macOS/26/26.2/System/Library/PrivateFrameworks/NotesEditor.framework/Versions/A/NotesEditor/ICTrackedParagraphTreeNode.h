@class ICTrackedParagraph, NSString, NSMutableArray;

@interface ICTrackedParagraphTreeNode : NSObject

@property (retain, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (retain, nonatomic) NSMutableArray *children;
@property (weak, nonatomic) ICTrackedParagraphTreeNode *parent;
@property (nonatomic) BOOL checked;
@property (nonatomic) long long indent;
@property (retain, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *recurisiveDescription;

+ (id)placeholderNodeWithIndentation:(unsigned long long)a0;
+ (id)nodeFromTrackedParagraph:(id)a0 textView:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (void)addChild:(id)a0;
- (id)linerizedRepresentation;
- (void)recursivlyAddDescriptionToString:(id)a0;
- (void)recursivlyAddTrackedParagraphsToArray:(id)a0;
- (void)recursivlySortCheckedItemsToBottom;

@end
