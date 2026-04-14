@class NSArray, ADInterSessionFilterParameters;

@interface ADInterSessionFilter : NSObject {
    unsigned int _version;
    ADInterSessionFilterParameters *_params;
    struct deque<Node *, std::allocator<Node *>> { struct __split_buffer<Node **, std::allocator<Node **>> { struct Node ***__first_; struct Node ***__begin_; struct Node ***__end_; struct __compressed_pair<Node ***, std::allocator<Node **>> { struct Node ***__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<Node *>> { unsigned long long __value_; } __size_; } _nodes;
    BOOL _isStepDetected;
    NSArray *_fieldNames;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (long long)insertEntry:(id)a0 withWeight:(double)a1;
- (id)calculate;
- (id)initWithFieldNames:(id)a0 parameters:(id)a1;
- (long long)fillWithEntry:(id)a0;
- (long long)fillWithDictionaryRepresentation:(id)a0;
- (id)insertEntryAndCalculate:(id)a0 withWeight:(double)a1;

@end
