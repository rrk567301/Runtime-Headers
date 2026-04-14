@class NSEnumerator;

@interface InputSourceTargetEnumerator : NSEnumerator {
    NSEnumerator *fArrayEnum;
}

+ (id)inputSourceTargetEnumeratorWithArray:(id)a0;

- (id)nextObject;
- (id)allObjects;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;

@end
