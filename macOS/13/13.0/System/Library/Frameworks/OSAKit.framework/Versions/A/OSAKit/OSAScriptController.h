@class OSAScriptControllerPrivate, OSAScriptView, OSALanguage, NSTextView, OSAScript;

@interface OSAScriptController : NSController {
    OSAScriptView *scriptView;
    NSTextView *resultView;
    OSAScriptControllerPrivate *_private;
}

@property (retain) OSAScriptView *scriptView;
@property (retain) NSTextView *resultView;
@property (copy) OSAScript *script;
@property (retain) OSALanguage *language;
@property (readonly) long long scriptState;
@property (readonly, getter=isCompiling) BOOL compiling;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isStopped;
- (BOOL)isRunning;
- (void)awakeFromNib;
- (void)setUndoManager:(id)a0;
- (id)undoManager;
- (BOOL)isRecording;
- (id)defaultTarget;
- (void)setDefaultTarget:(id)a0;
- (id)scriptFromSource;
- (BOOL)compileScript:(id)a0 withUndo:(BOOL)a1;
- (void)compileScript:(id)a0;
- (id)runScriptReturningResult:(id)a0;
- (void)runScript:(id)a0;
- (void)recordScript:(id)a0;
- (void)stopScript:(id)a0;
- (void)setScriptState:(long long)a0;
- (void)setIsCompiling:(BOOL)a0;
- (BOOL)shouldCancelExecution;
- (void)setShouldCancelExecution:(BOOL)a0;

@end
