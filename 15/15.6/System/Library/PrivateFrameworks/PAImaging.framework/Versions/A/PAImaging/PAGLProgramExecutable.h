@class PAGLShader, PAOpenGLProgram, NSObject, PAGLGeometryShader;
@protocol OS_dispatch_queue;

@interface PAGLProgramExecutable : PAGLObject {
    NSObject<OS_dispatch_queue> *_queue;
    PAGLShader *_vertexShader;
    PAGLShader *_fragmentShader;
    PAGLGeometryShader *_geometryShader;
    char _isCompiled;
    char _isLinked;
    char _isRunning;
}

@property (readonly, weak, nonatomic) PAOpenGLProgram *program;
@property (readonly, nonatomic, getter=isLoaded) char loaded;

+ (void)deleteWithContext:(id)a0 objectID:(unsigned int)a1;

- (char)load;
- (void).cxx_destruct;
- (char)_isLoaded;
- (char)_run:(id /* block */)a0;
- (void)_begin;
- (unsigned int)createWithContext:(id)a0;
- (char)_loadIfNeeded;
- (int)_actualLocationForAttribute:(id)a0;
- (void)_attachShaders;
- (void)_bindAttributeLocations;
- (char)_canRunInContext:(id)a0;
- (void)_compile;
- (char)_compileIfNeeded;
- (void)_compileWithContext:(id)a0;
- (void)_end;
- (char)_isValidLocation:(unsigned int)a0 forAttribute:(id)a1;
- (void)_link;
- (char)_linkIfNeeded;
- (void)_linkProgram;
- (char)_linkStatus;
- (void)_linkWithContext:(id)a0;
- (char)_runInContext:(id)a0 usingBlock:(id /* block */)a1;
- (char)_validateAttributeLocations;
- (char)canRunInContext:(id)a0;
- (id)initWithProgram:(id)a0 device:(id)a1;
- (id)instantiate;
- (char)runInContext:(id)a0 usingBlock:(id /* block */)a1;

@end
