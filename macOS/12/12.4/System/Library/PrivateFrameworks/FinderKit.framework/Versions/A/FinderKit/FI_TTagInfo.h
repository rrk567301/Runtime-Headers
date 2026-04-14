@class NSString;

@interface FI_TTagInfo : NSObject {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _tagNode;
}

@property (class, nonatomic) short labelColorForNewTag;

@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL visibleInSidebar;
@property (readonly, nonatomic) BOOL pinnedInSidebar;
@property (readonly, nonatomic) long long sidebarIndex;
@property (nonatomic) long long labelColor;
@property (readonly, nonatomic) BOOL isDiscovered;
@property (readonly, nonatomic) BOOL isAddTagPlaceholder;
@property (nonatomic) unsigned long long numberOfItemsLackingThisTag;

+ (id)tagAttributesForNodes:(const void *)a0;
+ (id)tagsFromTagAttr:(id)a0;
+ (id)attrsFromTags:(id)a0;
+ (id)tagAttributes:(id)a0 withLabel:(long long)a1;
+ (long long)labelForTags:(id)a0;
+ (id)tagInfoWithName:(id)a0;
+ (id)tagsForTagsAndLabelIndex:(id)a0 labelIndex:(short)a1;
+ (id)tagFromTagAttributes:(id)a0;
+ (long long)labelForTag:(id)a0;
+ (id)tagInfoPlaceholderWithName:(id)a0;
+ (void)setLabelColorForNewTag:(short)a0;
+ (id)tagInfoWithName:(id)a0 tagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
+ (short)labelColorForNewTag;
+ (id)tagInfoWithName:(id)a0 tagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 labelIndex:(short)a2;
+ (long long)labelFromTagData:(id)a0;
+ (id)tagAttributes:(id)a0 withLabel:(long long)a1 visible:(BOOL)a2 numItemsLackingTag:(unsigned long long)a3;
+ (id)tagAttributes:(id)a0 withLabel:(long long)a1 visible:(BOOL)a2;
+ (id)tagInfoWithDiscoveredName:(id)a0;
+ (id)tagsFromNames:(id)a0;
+ (id)tagAttributes:(id)a0 withLabel:(long long)a1 visible:(BOOL)a2 pinned:(BOOL)a3;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id).cxx_construct;
- (id)info;
- (BOOL)isDiscovered;
- (void)syncFromTag:(id)a0;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)tagNode;
- (id)tagAttributes;
- (id)initWithName:(id)a0 tagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 label:(short)a2 isVisible:(const struct TriStateBool { int x0; } *)a3 isAddTagPlaceholder:(BOOL)a4;
- (id)initWithName:(id)a0 tagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 label:(short)a2 isVisible:(const struct TriStateBool { int x0; } *)a3;

@end
