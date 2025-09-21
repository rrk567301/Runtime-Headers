@class VFXBidirectionalRemapTable;

@interface VFXCopyContext : NSObject {
    struct __CFDictionary { } *_remapTable;
    VFXBidirectionalRemapTable *_entityRemapTable;
}

- (void)dealloc;
- (void)_remapEntityReferencesToVFXObjects:(id)a0;

@end
