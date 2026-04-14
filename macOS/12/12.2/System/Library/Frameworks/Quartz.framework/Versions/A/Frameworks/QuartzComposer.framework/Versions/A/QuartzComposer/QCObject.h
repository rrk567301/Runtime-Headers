@interface QCObject : NSObject {
    struct __CFDictionary { } *_staticMetadata;
    struct __CFDictionary { } *_forwardMetadata;
    void *_unused[4];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)metadataForKey:(id)a0;
- (void)setMetadata:(id)a0 forKey:(id)a1 shouldForward:(BOOL)a2;
- (struct __CFDictionary { } *)_forwardMetadata;
- (void)removeMetadataForKey:(id)a0;
- (void)removeAllMetadata;
- (void)forwardMetadataToObject:(id)a0;
- (id)allMetadata;
- (id)allStaticMetadata;
- (id)allForwardedMetadata;

@end
