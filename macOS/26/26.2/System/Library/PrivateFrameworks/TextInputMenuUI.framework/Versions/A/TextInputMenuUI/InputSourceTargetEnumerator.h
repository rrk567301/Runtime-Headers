@class NSEnumerator;

@interface InputSourceTargetEnumerator : NSEnumerator {
    NSEnumerator *fArrayEnum;
}

+ (id)inputSourceTargetEnumeratorWithArray:(id)a0;

- (id)nextObject;
- (id)initWithArray:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;

@end
