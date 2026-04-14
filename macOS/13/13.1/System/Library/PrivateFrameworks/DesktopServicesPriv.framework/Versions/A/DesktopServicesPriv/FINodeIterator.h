@interface FINodeIterator : NSObject {
    struct OpaqueNodeIterator { } *_iterator;
}

@property (readonly, nonatomic) BOOL fullyPopulated;
@property (readonly, nonatomic) unsigned long long estimatedSize;

+ (id)iteratorForFINode:(id)a0 includingInvisibleItems:(BOOL)a1;

- (void)dealloc;
- (id)next;
- (id)initWithIterator:(struct OpaqueNodeIterator { } *)a0;
- (id)first;

@end
