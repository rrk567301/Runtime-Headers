@interface VFXCommonProfileProgramCache : NSObject {
    struct __CFXProgram { } *_program;
    struct __CFSet { } *_owners;
}

- (void)dealloc;
- (id)init;

@end
