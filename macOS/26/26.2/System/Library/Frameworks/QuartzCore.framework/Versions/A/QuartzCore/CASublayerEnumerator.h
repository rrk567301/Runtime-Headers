@class CALayer, NSArray;

@interface CASublayerEnumerator : NSEnumerator {
    CALayer *_mask;
    NSArray *_sublayers;
    unsigned long long _index;
    unsigned long long _count;
}

- (id)nextObject;
- (id)initWithLayer:(id)a0;
- (void)dealloc;

@end
