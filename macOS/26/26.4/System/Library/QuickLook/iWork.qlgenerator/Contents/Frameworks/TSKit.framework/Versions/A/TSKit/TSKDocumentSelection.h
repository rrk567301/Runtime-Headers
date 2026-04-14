@class TSKDocumentRoot;

@interface TSKDocumentSelection : TSKSelection

@property (readonly, weak, nonatomic) TSKDocumentRoot *documentRoot;

+ (Class)archivedSelectionClass;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDocumentRoot:(id)a0;

@end
