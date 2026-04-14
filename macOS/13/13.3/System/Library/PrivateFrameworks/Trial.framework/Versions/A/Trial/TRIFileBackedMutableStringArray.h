@interface TRIFileBackedMutableStringArray : NSObject {
    int _fd;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)init;
- (BOOL)addString:(id)a0;
- (BOOL)enumerateStringsWithBlock:(id /* block */)a0;

@end
