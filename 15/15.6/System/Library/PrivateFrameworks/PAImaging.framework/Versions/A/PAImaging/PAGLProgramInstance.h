@class PAGLProgramExecutable, NSMutableDictionary;

@interface PAGLProgramInstance : NSObject {
    NSMutableDictionary *_uniforms;
    char _isRunning;
}

@property (readonly, nonatomic) PAGLProgramExecutable *program;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProgram:(id)a0;
- (char)_setAllUserDefinedUniformValues;
- (char)_canRunInContext:(id)a0;
- (char)_checkAllUserDefinedUniformsAreSet;
- (char)_checkWillBeAccelerated:(id)a0;
- (int)_getUniformLocation:(id)a0;
- (char)_runInContext:(id)a0 usingBlock:(id /* block */)a1;
- (char)_setUniform:(id)a0 withValue:(id)a1;
- (char)runInContext:(id)a0 usingBlock:(id /* block */)a1;
- (char)runWithBlock:(id /* block */)a0 context:(id)a1;
- (void)setValue:(id)a0 forUniform:(id)a1;
- (id)valueForUniform:(id)a0;

@end
