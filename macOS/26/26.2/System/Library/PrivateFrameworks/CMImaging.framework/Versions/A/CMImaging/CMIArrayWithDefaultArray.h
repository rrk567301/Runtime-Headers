@class NSArray;

@interface CMIArrayWithDefaultArray : NSArray {
    unsigned long long _count;
}

@property (readonly) NSArray *mainArray;
@property (readonly) NSArray *defaultArray;

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithMainArray:(id)a0 defaultArray:(id)a1;

@end
