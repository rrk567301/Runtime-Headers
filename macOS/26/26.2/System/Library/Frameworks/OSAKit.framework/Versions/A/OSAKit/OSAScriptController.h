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

- (void)setUndoManager:(id)a0;
- (BOOL)isStopped;
- (BOOL)isRecording;
- (id)initWithCoder:(id)a0;
- (BOOL)isRunning;
- (void)encodeWithCoder:(id)a0;
- (id)undoManager;
- (id)init;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setScriptState:(long long)a0;
- (void)setIsCompiling:(BOOL)a0;
- (void)compileScript:(id)a0;
- (BOOL)compileScript:(id)a0 withUndo:(BOOL)a1;
- (id)defaultTarget;
- (void)recordScript:(id)a0;
- (void)runScript:(id)a0;
- (id)runScriptReturningResult:(id)a0;
- (id)scriptFromSource;
- (void)setDefaultTarget:(id)a0;
- (void)setShouldCancelExecution:(BOOL)a0;
- (BOOL)shouldCancelExecution;
- (void)stopScript:(id)a0;

@end
