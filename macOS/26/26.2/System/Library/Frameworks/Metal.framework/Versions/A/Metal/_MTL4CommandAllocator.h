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

- (unsigned long long)allocatedSize;
- (id)initWithDevice:(id)a0;
- (void)setPrivateData:(id)a0 privateDataOffset:(unsigned long long)a1 logState:(id)a2;
- (void)reset;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (BOOL)getPrivateDataAndOffset:(id *)a0 privateDataOffset:(unsigned long long *)a1;
- (void)dealloc;
- (void)addResetHandler:(id /* block */)a0;
- (void)_executeResetHandlers;

@end
