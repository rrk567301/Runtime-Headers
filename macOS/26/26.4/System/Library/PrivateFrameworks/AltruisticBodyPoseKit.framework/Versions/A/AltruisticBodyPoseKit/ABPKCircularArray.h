@class NSArray, NSMutableArray;

@interface ABPKCircularArray : NSObject {
    NSMutableArray *_array;
    long long _capacity;
}

@property (readonly) NSArray *contents;

- (id)initWithCapacity:(long long)a0;
- (void)add:(id)a0;
- (void).cxx_destruct;
- (long long)count;

@end
