@class NSEnumerator;

@interface InputSourceTargetEnumerator : NSEnumerator {
    NSEnumerator *fArrayEnum;
}

+ (id)inputSourceTargetEnumeratorWithArray:(id)a0;

- (id)nextObject;
- (id)allObjects;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;

@end
