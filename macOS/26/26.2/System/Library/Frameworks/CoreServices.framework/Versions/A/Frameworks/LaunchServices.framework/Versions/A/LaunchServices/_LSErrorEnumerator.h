@class NSError;

@interface _LSErrorEnumerator : _LSEmptyEnumerator {
    NSError *_error;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithPreparationError:(id)a0;

@end
