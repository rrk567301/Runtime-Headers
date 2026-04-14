@interface VFXCommonProfileProgramCache : NSObject {
    struct __CFXProgram { } *_program;
    struct __CFSet { } *_owners;
}

- (id)init;
- (void)dealloc;

@end
