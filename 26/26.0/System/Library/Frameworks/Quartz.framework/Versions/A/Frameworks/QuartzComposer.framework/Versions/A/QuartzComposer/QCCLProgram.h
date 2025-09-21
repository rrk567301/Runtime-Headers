@interface QCCLProgram : NSObject {
    struct _cl_program { } *_program;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithProgram:(struct _cl_program { } *)a0;

@end
