@class CPParagraphListItem;

@interface CPList : NSObject <CPDisposable> {
    struct __CFArray { } *items;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spacer;
@property (nonatomic) int type;
@property (nonatomic) unsigned int ordinalPrefixLength;
@property (nonatomic) unsigned int ordinalSuffixLength;
@property (retain, nonatomic) CPParagraphListItem *parentItem;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)itemAtIndex:(unsigned int)a0;
- (unsigned int)itemCount;
- (void)addItem:(id)a0;
- (void)dispose;
- (char)containsParagraph:(id)a0;
- (char)isMultilevel;

@end
