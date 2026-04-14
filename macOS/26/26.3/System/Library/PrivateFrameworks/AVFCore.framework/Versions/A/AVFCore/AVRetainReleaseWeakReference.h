@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)initWithReferencedObject:(id)a0;
- (id)description;
- (id)init;
- (id)referencedObject;
- (void)dealloc;

@end
