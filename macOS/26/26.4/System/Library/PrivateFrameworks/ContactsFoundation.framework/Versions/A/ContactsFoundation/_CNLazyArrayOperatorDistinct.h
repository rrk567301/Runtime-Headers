@class NSMutableSet;

@interface _CNLazyArrayOperatorDistinct : _CNLazyArrayOperator {
    NSMutableSet *_seenValues;
}

- (void).cxx_destruct;
- (id)initWithInput:(id)a0;
- (id)nextObject;

@end
