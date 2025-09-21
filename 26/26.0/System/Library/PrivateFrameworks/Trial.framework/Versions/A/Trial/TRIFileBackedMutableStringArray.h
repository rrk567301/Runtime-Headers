@interface TRIFileBackedMutableStringArray : NSObject {
    int _fd;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)arrayFromDirectory:(id)a0;

- (void)dealloc;
- (BOOL)addString:(id)a0;
- (id)init;
- (BOOL)enumerateStringsWithBlock:(id /* block */)a0;

@end
