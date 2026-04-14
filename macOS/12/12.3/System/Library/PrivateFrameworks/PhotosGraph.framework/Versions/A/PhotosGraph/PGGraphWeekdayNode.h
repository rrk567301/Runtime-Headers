@class PGGraphWeekdayNodeCollection;

@interface PGGraphWeekdayNode : PGGraphPartOfWeekNode

@property (readonly, nonatomic) PGGraphWeekdayNodeCollection *collection;

+ (id)filter;

- (id)init;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
