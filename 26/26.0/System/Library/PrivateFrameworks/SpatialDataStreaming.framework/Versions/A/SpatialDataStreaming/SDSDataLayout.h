@class NSString;

@interface SDSDataLayout : NSObject {
    void /* unknown type, empty encoding */ _parent;
    void /* function */ _bufferHandler;
    void /* unknown type, empty encoding */ resolvedPairLayoutInfo;
    void /* unknown type, empty encoding */ fieldOrder;
    void /* unknown type, empty encoding */ fields;
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ packetIdentifierFieldName;
    void /* unknown type, empty encoding */ fullSizeRingBuffer;
    void /* unknown type, empty encoding */ packedSizeRingBuffer;
    void /* unknown type, empty encoding */ bufferCountCapacity;
    void /* unknown type, empty encoding */ numItemsToAllocatePerBuffer;
}

@property (nonatomic, copy) id /* block */ bufferHandler;
@property (nonatomic, readonly) SDSDataLayout *parent;
@property (nonatomic, copy) id /* block */ _bufferHandler;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)initWithSize:(long long)a0;
- (void).cxx_destruct;
- (void *)allocateBuffer;
- (void)addField:(id)a0 offset:(long long)a1 size:(long long)a2;
- (void)addField:(id)a0 offset:(long long)a1 size:(long long)a2 options:(unsigned long long)a3;
- (void)addSubLayout:(id)a0 offset:(long long)a1 subLayout:(id)a2 options:(unsigned long long)a3;
- (void)freeBuffer:(void *)a0;
- (id)initWithSize:(long long)a0 bufferCountCapacity:(long long)a1;
- (void)addSubLayout:(id)a0 offset:(long long)a1 subLayout:(id)a2;
- (id)initWithSize:(long long)a0 bufferCountCapacity:(long long)a1 numItemsToAllocatePerBuffer:(long long)a2;
- (BOOL)isFieldAvailable:(id)a0;
- (BOOL)resolveWithOtherDataLayout:(id)a0 error:(id *)a1;
- (id)subLayoutWithName:(id)a0;

@end
