@interface __NSSingleObjectEnumerator : NSEnumerator {
    id _theCollection;
    id _theObjectToReturn;
}

- (id)nextObject;
- (id)description;
- (id)initWithObject:(id)a0 collection:(id)a1;
- (id)init;
- (void)dealloc;

@end
