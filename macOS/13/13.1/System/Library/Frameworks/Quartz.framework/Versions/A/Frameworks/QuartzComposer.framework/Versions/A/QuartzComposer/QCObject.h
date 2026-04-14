@interface QCObject : NSObject {
    struct __CFDictionary { } *_staticMetadata;
    struct __CFDictionary { } *_forwardMetadata;
    void *_unused[4];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (void)setMetadata:(id)a0 forKey:(id)a1 shouldForward:(BOOL)a2;
- (void)removeMetadataForKey:(id)a0;
- (void)removeAllMetadata;
- (id)metadataForKey:(id)a0;
- (struct __CFDictionary { } *)_forwardMetadata;
- (void)forwardMetadataToObject:(id)a0;
- (id)allMetadata;
- (id)allStaticMetadata;
- (id)allForwardedMetadata;

@end
