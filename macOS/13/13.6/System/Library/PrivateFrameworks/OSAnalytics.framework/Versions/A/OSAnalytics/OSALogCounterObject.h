@class NSMutableDictionary;

@interface OSALogCounterObject : NSObject

@property (nonatomic) unsigned long long count;
@property (readonly) NSMutableDictionary *signatures;

+ (id)counter;
+ (id)masterCounts;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
