@class NSError;

@interface _LSErrorEnumerator : _LSEmptyEnumerator {
    NSError *_error;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithPreparationError:(id)a0;

@end
