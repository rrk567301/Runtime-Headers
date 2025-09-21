@class CPParagraphListItem;

@interface CPList : NSObject <CPDisposable> {
    struct __CFArray { } *items;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spacer;
@property (nonatomic) int type;
@property (nonatomic) unsigned int ordinalPrefixLength;
@property (nonatomic) unsigned int ordinalSuffixLength;
@property (retain, nonatomic) CPParagraphListItem *parentItem;

- (void)finalize;
- (id)itemAtIndex:(unsigned int)a0;
- (void)addItem:(id)a0;
- (unsigned int)itemCount;
- (void)dealloc;
- (id)init;
- (void)dispose;
- (BOOL)containsParagraph:(id)a0;
- (BOOL)isMultilevel;

@end
