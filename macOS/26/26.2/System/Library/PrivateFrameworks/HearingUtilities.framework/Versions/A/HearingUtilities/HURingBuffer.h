@class NSMutableArray;

@interface HURingBuffer : NSObject <NSCopying> {
    NSMutableArray *_bufferArray;
    long long _size;
    long long _head;
}

@property (readonly) unsigned long long count;

- (id)content;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWithCount:(unsigned long long)a0;

@end
