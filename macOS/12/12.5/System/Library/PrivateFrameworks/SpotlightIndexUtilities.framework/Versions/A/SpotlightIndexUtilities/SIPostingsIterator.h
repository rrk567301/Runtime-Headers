@interface SIPostingsIterator : NSObject

@property (readonly, nonatomic) int fd;
@property (readonly, nonatomic) unsigned long long base;
@property (copy, nonatomic) id /* block */ offsetBlock;
@property (copy, nonatomic) id /* block */ docBlock;

+ (id)iteratorWithFileDescriptor:(int)a0 base:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithFileDescriptor:(int)a0 base:(unsigned long long)a1;
- (void)iterate:(unsigned long long)a0;

@end
