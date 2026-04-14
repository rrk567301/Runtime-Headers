@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (void)dealloc;
- (id)init;
- (id)referencedObject;
- (id)description;
- (id)initWithReferencedObject:(id)a0;

@end
