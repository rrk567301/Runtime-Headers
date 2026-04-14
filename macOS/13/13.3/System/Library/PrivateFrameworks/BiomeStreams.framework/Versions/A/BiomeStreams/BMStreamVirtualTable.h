@class BMSQLSchema;

@interface BMStreamVirtualTable : NSObject

@property (readonly, nonatomic) BMSQLSchema *schema;
@property (readonly, copy, nonatomic) id /* block */ publisherBlock;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0;
- (id)publisher;
- (id)initWithSchema:(id)a0 publisherBlock:(id /* block */)a1;

@end
