@class NSOrderedSet, NSString;

@interface CDMConfig : NSObject <NSCopying>

@property (readonly, nonatomic) NSOrderedSet *availableServiceGraphs;
@property (readonly, nonatomic) NSString *defaultLocaleIdentifier;
@property (readonly, nonatomic) unsigned int maxConcurrentCount;

+ (id)defaultEnabledServiceGraph;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMaxConcurrentCount:(unsigned int)a0;

@end
