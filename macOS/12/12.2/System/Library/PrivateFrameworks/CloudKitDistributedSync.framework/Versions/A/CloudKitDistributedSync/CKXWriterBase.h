@class NSMutableArray, CKXSchema;

@interface CKXWriterBase : NSObject

@property (readonly, nonatomic) NSMutableArray *datas;
@property (readonly, nonatomic) CKXSchema *schema;

- (void).cxx_destruct;
- (long long)pageCount;
- (id)pageAtIndex:(long long)a0;
- (id)initWithSchema:(id)a0;
- (long long)newPage;

@end
