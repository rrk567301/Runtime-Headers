@class NSArray, NSMutableArray;

@interface ABPKCircularArray : NSObject {
    NSMutableArray *_array;
    long long _capacity;
}

@property (readonly) NSArray *contents;

- (long long)count;
- (void)add:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapacity:(long long)a0;

@end
