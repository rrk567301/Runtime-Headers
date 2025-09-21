@class NSDictionary;

@interface PHASESpatialPipeline : NSObject

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy) NSDictionary *entries;

+ (id)new;
+ (char)addToDictionary:(id)a0 add:(char)a1 key:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (id)initWithFlags:(unsigned long long)a0;

@end
