@class NSArray;

@interface CMIArrayWithDefaultArray : NSArray {
    unsigned long long _count;
}

@property (readonly) NSArray *mainArray;
@property (readonly) NSArray *defaultArray;

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithMainArray:(id)a0 defaultArray:(id)a1;

@end
