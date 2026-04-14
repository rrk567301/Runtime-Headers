@class NSString;

@interface AVRoutingRetainReleaseWeakReference : AVRoutingWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)initWithReferencedObject:(id)a0;
- (id)description;
- (id)init;
- (id)referencedObject;
- (void)dealloc;

@end
