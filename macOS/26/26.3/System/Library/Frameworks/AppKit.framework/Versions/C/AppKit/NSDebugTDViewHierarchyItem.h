@class NSString, NSView, NSDictionary, NSDebugTDViewHierarchyOutlineTreeNode, NSNumber, NSAttributedString;

@interface NSDebugTDViewHierarchyItem : NSObject {
    NSString *_title;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRange;
    NSDictionary *_layoutFragmentStorageInfo;
    NSDebugTDViewHierarchyOutlineTreeNode *_inspectorRootNode;
}

@property (weak, nonatomic) NSView *nsViewObject;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *windowTitle;
@property (readonly, copy, nonatomic) NSString *className;
@property (readonly, nonatomic) NSNumber *addressAsNumber;
@property (readonly, copy, nonatomic) NSString *addressAsString;
@property (readonly, nonatomic) BOOL isFirstResponder;
@property (readonly, nonatomic) BOOL usesTextKit1;
@property (readonly, nonatomic) BOOL usesTextKit2;
@property (readonly, copy, nonatomic) NSAttributedString *textContents;
@property (readonly, copy, nonatomic) NSString *shortenedTextContents;
@property (readonly, copy, nonatomic) NSAttributedString *presentableTextStorageContents;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (readonly, nonatomic) NSDictionary *layoutFragmentStorageInfo;
@property (nonatomic) BOOL isTextItem;
@property (retain, nonatomic) Class kindOfClass;

+ (id)kindOfClassesToList;

- (id)initWithView:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
