@interface BRCLRUDictionaryNode : NSObject <NSCopying>

@property (readonly, nonatomic) id key;
@property (retain, nonatomic) id object;
@property (weak, nonatomic) BRCLRUDictionaryNode *next;
@property (weak, nonatomic) BRCLRUDictionaryNode *prev;

- (id)initWithKey:(id)a0 object:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
