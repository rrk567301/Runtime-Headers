@class NSOrderedSet, KNSlideNode;

@interface KNSlideCollectionSelection : TSKSelection

@property (readonly, nonatomic) NSOrderedSet *slideNodes;
@property (readonly, nonatomic) KNSlideNode *slideNodeToEdit;
@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (readonly, nonatomic, getter=isContiguous) char contiguous;

+ (Class)archivedSelectionClass;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)UUIDDescription;
- (id)initWithSlideNode:(id)a0;
- (id)initWithSlideNodes:(id)a0 slideNodeToEdit:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
