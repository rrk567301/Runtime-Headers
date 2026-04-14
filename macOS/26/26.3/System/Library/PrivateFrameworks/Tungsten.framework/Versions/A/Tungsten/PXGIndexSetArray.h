@interface PXGIndexSetArray : NSObject {
    long long _capacity;
}

@property (nonatomic) long long count;
@property (readonly, nonatomic) void **indexSetReferences;

- (id)description;
- (void)dealloc;
- (void)removeAllIndexes;

@end
