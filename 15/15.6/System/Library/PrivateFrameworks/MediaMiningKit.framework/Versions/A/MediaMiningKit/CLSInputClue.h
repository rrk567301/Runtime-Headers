@interface CLSInputClue : CLSClue {
    char _needsPreparation;
}

- (id)init;
- (void)prepareIfNeeded;
- (void)_prepareWithProgressBlock:(id /* block */)a0;

@end
