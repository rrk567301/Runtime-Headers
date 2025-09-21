@interface PXGComponentDataStore : NSObject {
    char *_data;
}

@property (readonly, nonatomic) unsigned long long elementSize;
@property (nonatomic) long long capacity;

- (id)mutableCopy;
- (void)dealloc;
- (id)init;
- (const void *)contents;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)byteSize;
- (id)initWithElementSize:(unsigned long long)a0;

@end
