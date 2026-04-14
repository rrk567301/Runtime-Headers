@class NSString, MTLPrivateDataTable;
@protocol MTLDevice;

@interface _MTL4CommandAllocator : _MTLObjectWithLabel <MTL4CommandAllocatorGGDSPI> {
    MTLPrivateDataTable *_privateDataTable;
    struct vector<void (^)(), std::allocator<void (^)()>> { id /* block */ *__begin_; id /* block */ *__end_; struct { id /* block */ *__cap_; } ; } _resetHandlers;
}

@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (BOOL)getPrivateDataAndOffset:(id *)a0 privateDataOffset:(unsigned long long *)a1;
- (unsigned long long)allocatedSize;
- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
- (void)setPrivateData:(id)a0 privateDataOffset:(unsigned long long)a1 logState:(id)a2;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)dealloc;
- (void)addResetHandler:(id /* block */)a0;
- (void)_executeResetHandlers;

@end
