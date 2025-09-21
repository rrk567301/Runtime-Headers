@class NSString;

@interface SKIOObject : NSObject

@property (readonly, nonatomic) unsigned int ioObj;
@property (readonly, copy, nonatomic) NSString *ioClassName;

- (void)dealloc;
- (id)description;
- (id)copyParent;
- (id)copyParentPropertyWithClass:(Class)a0 key:(id)a1;
- (id)copyProperties;
- (id)copyPropertyWithClass:(Class)a0 key:(id)a1;
- (id)initWithClassName:(id)a0;
- (id)initWithIOObject:(unsigned int)a0;
- (id)initWithIOObject:(unsigned int)a0 retain:(char)a1;
- (id)initWithIteratorNext:(id)a0;
- (id)initWithSKIOObject:(id)a0;
- (id)ioObjectWithClassName:(id)a0 iterateParents:(char)a1;
- (id)newIteratorWithOptions:(unsigned int)a0;
- (void)waitIOKitQuiet;

@end
