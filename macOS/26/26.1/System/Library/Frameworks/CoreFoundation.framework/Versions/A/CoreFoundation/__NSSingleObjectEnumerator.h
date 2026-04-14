@interface __NSSingleObjectEnumerator : NSEnumerator {
    id _theCollection;
    id _theObjectToReturn;
}

- (id)nextObject;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithObject:(id)a0 collection:(id)a1;

@end
