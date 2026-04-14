@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)referencedObject;
- (id)initWithReferencedObject:(id)a0;
- (id)init;
- (id)description;
- (void)dealloc;

@end
