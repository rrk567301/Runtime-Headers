@interface PXGComponentDataStore : NSObject {
    char *_data;
}

@property (readonly, nonatomic) unsigned long long elementSize;
@property (nonatomic) long long capacity;

- (const void *)contents;
- (id)mutableCopy;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;
- (unsigned long long)byteSize;
- (id)initWithElementSize:(unsigned long long)a0;

@end
