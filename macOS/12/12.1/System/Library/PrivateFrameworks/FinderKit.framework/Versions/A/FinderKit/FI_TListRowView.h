@class NSValue, NSObject;
@protocol TListRowViewDelegate;

@interface FI_TListRowView : NSTableRowView {
    struct TNSWeakPtr<NSObject<TListRowViewDelegate>, void> { NSValue *fWeakObject; } _weakDelegate;
}

@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } node;
@property (weak, nonatomic) NSObject<TListRowViewDelegate> *delegate;
@property (nonatomic, getter=isIconDimmed) BOOL iconDimmed;
@property (nonatomic, getter=isTextDimmed) BOOL textDimmed;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id).cxx_construct;
- (void)didAddSubview:(id)a0;
- (void)openNode;

@end
