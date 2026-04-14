@class PAGLShader, PAOpenGLProgram, NSObject, PAGLGeometryShader;
@protocol OS_dispatch_queue;

@interface PAGLProgramExecutable : PAGLObject {
    NSObject<OS_dispatch_queue> *_queue;
    PAGLShader *_vertexShader;
    PAGLShader *_fragmentShader;
    PAGLGeometryShader *_geometryShader;
    BOOL _isCompiled;
    BOOL _isLinked;
    BOOL _isRunning;
}

@property (readonly, weak, nonatomic) PAOpenGLProgram *program;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;

+ (void)deleteWithContext:(id)a0 objectID:(unsigned int)a1;

- (BOOL)load;
- (void).cxx_destruct;
- (void)_end;
- (BOOL)_isLoaded;
- (BOOL)_run:(id /* block */)a0;
- (void)_begin;
- (BOOL)_linkStatus;
- (void)_link;
- (unsigned int)createWithContext:(id)a0;
- (id)instantiate;
- (id)initWithProgram:(id)a0 device:(id)a1;
- (void)_compile;
- (void)_compileWithContext:(id)a0;
- (void)_linkWithContext:(id)a0;
- (void)_attachShaders;
- (void)_bindAttributeLocations;
- (void)_linkProgram;
- (BOOL)_validateAttributeLocations;
- (int)_actualLocationForAttribute:(id)a0;
- (BOOL)_compileIfNeeded;
- (BOOL)_linkIfNeeded;
- (BOOL)_loadIfNeeded;
- (BOOL)_canRunInContext:(id)a0;
- (BOOL)_runInContext:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_isValidLocation:(unsigned int)a0 forAttribute:(id)a1;
- (BOOL)canRunInContext:(id)a0;
- (BOOL)runInContext:(id)a0 usingBlock:(id /* block */)a1;

@end
