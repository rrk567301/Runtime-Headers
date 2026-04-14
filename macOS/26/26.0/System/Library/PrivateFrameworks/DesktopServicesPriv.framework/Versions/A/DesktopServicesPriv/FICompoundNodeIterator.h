@class NSString, __cap_, __end_;

@interface FICompoundNodeIterator : NSObject <FINodeIterator> {
    struct vector<NSObject<FINodeIterator> *, std::allocator<NSObject<FINodeIterator> *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _subIterators;
    unsigned long long fCurrentIterator;
}

@property (readonly, nonatomic) BOOL fullyPopulated;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)next;
- (id)first;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithNodes:(id)a0 options:(unsigned int)a1;

@end
