@class NSImage, NSString;

@interface FI_TTagColumnTableViewItem : FI_TTableViewItem {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _node;
}

@property (readonly, retain, nonatomic) NSImage *image;
@property (readonly, retain, nonatomic) NSString *name;
@property (nonatomic) BOOL drawSelected;

+ (id)keyPathsForValuesAffectingImage;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct TFENode { struct OpaqueNodeRef *x0; })node;
- (id)initWithTagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
