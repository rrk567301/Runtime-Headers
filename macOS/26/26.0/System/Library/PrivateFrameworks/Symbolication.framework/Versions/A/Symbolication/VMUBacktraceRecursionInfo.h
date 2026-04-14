@interface VMUBacktraceRecursionInfo : NSObject

@property (nonatomic) unsigned long long keyPC;
@property (nonatomic) unsigned int hottestElided;
@property (nonatomic) unsigned int coldestElided;
@property (nonatomic) unsigned int depth;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)dictionary;

@end
