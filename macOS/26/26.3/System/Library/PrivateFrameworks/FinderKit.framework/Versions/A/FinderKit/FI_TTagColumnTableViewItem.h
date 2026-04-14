@class NSImage, NSString;

@interface FI_TTagColumnTableViewItem : FI_TTableViewItem {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _node;
}

@property (readonly, retain, nonatomic) NSImage *image;
@property (readonly, retain, nonatomic) NSString *name;
@property (nonatomic) BOOL drawSelected;

+ (id)keyPathsForValuesAffectingImage;

- (struct TFENode { struct OpaqueNodeRef *x0; })node;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id).cxx_construct;
- (id)initWithTagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
