@class NSMutableSet;

@interface _CNLazyArrayOperatorDistinct : _CNLazyArrayOperator {
    NSMutableSet *_seenValues;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0;

@end
