@class NSMutableArray;

@interface HURingBuffer : NSObject <NSCopying> {
    NSMutableArray *_bufferArray;
    long long _size;
    long long _head;
}

@property (readonly) unsigned long long count;

- (id)content;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCount:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void).cxx_destruct;

@end
