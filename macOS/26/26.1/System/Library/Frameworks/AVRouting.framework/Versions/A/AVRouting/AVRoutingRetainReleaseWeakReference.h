@class NSString;

@interface AVRoutingRetainReleaseWeakReference : AVRoutingWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)initWithReferencedObject:(id)a0;
- (id)referencedObject;
- (id)description;
- (void)dealloc;
- (id)init;

@end
