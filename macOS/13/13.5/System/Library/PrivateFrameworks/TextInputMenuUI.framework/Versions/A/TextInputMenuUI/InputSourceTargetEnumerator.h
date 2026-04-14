@class NSEnumerator;

@interface InputSourceTargetEnumerator : NSEnumerator {
    NSEnumerator *fArrayEnum;
}

+ (id)inputSourceTargetEnumeratorWithArray:(id)a0;

- (id)allObjects;
- (id)initWithArray:(id)a0;
- (id)nextObject;

@end
