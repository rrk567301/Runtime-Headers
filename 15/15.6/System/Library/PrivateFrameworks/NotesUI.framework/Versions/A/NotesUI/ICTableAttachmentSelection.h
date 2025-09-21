@class NSArray;

@interface ICTableAttachmentSelection : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *rows;
@property (readonly, nonatomic) char isRangeOrSpanningSelection;
@property (nonatomic) char moving;
@property (nonatomic) char draggingText;
@property (readonly, nonatomic) char valid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)selectRows:(id)a0;
- (void)unselect;
- (char)removeColumns:(id)a0 rows:(id)a1;
- (char)removeColumns:(id)a0 rows:(id)a1 previousColumns:(id)a2 previousRows:(id)a3;
- (void)selectCellAtColumn:(id)a0 row:(id)a1;
- (void)selectCellRangeAtColumns:(id)a0 rows:(id)a1;
- (void)selectColumns:(id)a0;
- (void)setSelectionEqualTo:(id)a0;

@end
