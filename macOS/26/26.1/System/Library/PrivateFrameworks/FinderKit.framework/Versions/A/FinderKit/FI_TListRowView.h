@class NSObject;
@protocol TListRowViewDelegate;

@interface FI_TListRowView : NSTableRowView {
    struct TNSWeakPtr<NSObject<TListRowViewDelegate>> { NSObject<TListRowViewDelegate> *fWeakObject; } _weakDelegate;
}

@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } node;
@property (weak, nonatomic) NSObject<TListRowViewDelegate> *delegate;
@property (nonatomic, getter=isIconDimmed) BOOL iconDimmed;
@property (nonatomic, getter=isTextDimmed) BOOL textDimmed;

- (void)didAddSubview:(id)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)draggingExited;
- (void)openNode;
- (void)receivedDrop;
- (void)validatedDrop:(const void *)a0;

@end
