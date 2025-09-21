@interface _SWCPatternMatchingResult : NSObject

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic, getter=isExcluded) char excluded;

+ (id)new;

- (id)init;
- (id)_initWithIndex:(unsigned long long)a0 excluded:(char)a1;

@end
