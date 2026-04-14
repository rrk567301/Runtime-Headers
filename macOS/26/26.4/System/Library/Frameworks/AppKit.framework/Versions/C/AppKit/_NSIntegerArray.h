@interface _NSIntegerArray : NSObject {
    long long *_data;
    unsigned long long _count;
    unsigned long long _capacity;
}

- (id)init;
- (void)dealloc;

@end
