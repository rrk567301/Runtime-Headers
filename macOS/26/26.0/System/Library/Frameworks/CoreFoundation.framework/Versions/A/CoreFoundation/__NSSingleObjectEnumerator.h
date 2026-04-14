@interface __NSSingleObjectEnumerator : NSEnumerator {
    id _theCollection;
    id _theObjectToReturn;
}

- (id)initWithObject:(id)a0 collection:(id)a1;
- (void)dealloc;
- (id)nextObject;
- (id)init;
- (id)description;

@end
