@class NSArray;

@interface CMIArrayWithDefaultArray : NSArray {
    unsigned long long _count;
}

@property (readonly) NSArray *mainArray;
@property (readonly) NSArray *defaultArray;

- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithMainArray:(id)a0 defaultArray:(id)a1;

@end
