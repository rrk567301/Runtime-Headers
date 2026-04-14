@class NSURL;

@interface FI_FinderResolvedURL : NSObject {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _node;
}

@property (readonly, nonatomic) NSURL *url;

- (const struct TFENode { struct OpaqueNodeRef *x0; } *)node;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 andNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;

@end
