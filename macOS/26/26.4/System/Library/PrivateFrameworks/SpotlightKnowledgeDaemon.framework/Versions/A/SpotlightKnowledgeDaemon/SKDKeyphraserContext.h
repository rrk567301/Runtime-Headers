@class NSArray;

@interface SKDKeyphraserContext : SKDModelContext

@property (readonly, nonatomic) unsigned long long purgeCount;
@property (readonly, nonatomic) long long maxFlushDelta;
@property (copy, nonatomic) NSArray *preferredLanguages;

- (void).cxx_destruct;
- (id)initWithWithPurgeCount:(unsigned long long)a0 maxFlushDelta:(long long)a1;

@end
