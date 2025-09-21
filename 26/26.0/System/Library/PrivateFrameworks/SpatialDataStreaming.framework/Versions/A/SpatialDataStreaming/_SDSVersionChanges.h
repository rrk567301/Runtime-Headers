@interface _SDSVersionChanges : NSObject {
    unsigned char _changeTypeMajor;
    unsigned short _replacementMajor;
    unsigned char _changeTypeMinor;
    unsigned short _replacementMinor;
    unsigned char _changeTypePatch;
    unsigned short _replacementPatch;
}

- (void)omitMajor;
- (void)omitMinor;
- (void)omitPatch;
- (void)preserveMajor;
- (void)preserveMinor;
- (void)preservePatch;
- (void)replaceMajor:(unsigned short)a0;
- (void)replaceMinor:(unsigned short)a0;
- (void)replacePatch:(unsigned short)a0;

@end
