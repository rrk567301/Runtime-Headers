@class CALayer, NSArray;

@interface CASublayerEnumerator : NSEnumerator {
    CALayer *_mask;
    NSArray *_sublayers;
    unsigned long long _index;
    unsigned long long _count;
}

- (id)initWithLayer:(id)a0;
- (id)nextObject;
- (void)dealloc;

@end
