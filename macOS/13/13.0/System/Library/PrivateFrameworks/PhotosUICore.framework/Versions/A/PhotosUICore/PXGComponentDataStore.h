@interface PXGComponentDataStore : NSObject {
    char *_data;
}

@property (readonly, nonatomic) unsigned long long elementSize;
@property (nonatomic) long long capacity;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)mutableCopy;
- (const void *)contents;
- (unsigned long long)byteSize;
- (id)initWithElementSize:(unsigned long long)a0;

@end
