@class TNSheet;

@interface TNSheetSelection : TSKSelection

@property (readonly, retain, nonatomic) TNSheet *sheet;
@property (readonly, nonatomic, getter=isPaginated) char paginated;

+ (Class)archivedSelectionClass;
+ (id)selectionForSheet:(id)a0 paginated:(char)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)UUIDDescription;
- (id)initWithSheet:(id)a0 paginated:(char)a1;

@end
