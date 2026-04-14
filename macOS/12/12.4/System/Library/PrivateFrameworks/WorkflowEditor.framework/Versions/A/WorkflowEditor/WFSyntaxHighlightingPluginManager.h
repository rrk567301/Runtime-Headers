@class JSContext, JSManagedValue, NSMutableArray, NSColor;

@interface WFSyntaxHighlightingPluginManager : NSObject {
    JSContext *_context;
    NSMutableArray *_tokenLines;
    unsigned long long _minimumChangedLine;
    unsigned long long _maxChangedLine;
    JSManagedValue *_colorScheme;
    JSManagedValue *_highlightingPlugin;
    JSManagedValue *_syntaxPlugin;
}

@property (nonatomic) unsigned long long syntaxHighlightingType;
@property (nonatomic) unsigned long long syntaxHighlightingAppearance;
@property (readonly, nonatomic) NSColor *defaultBackgroundColor;
@property (readonly, nonatomic) NSColor *defaultForegroundColor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadPlugins;
- (BOOL)didChangeLine:(unsigned long long)a0 string:(id)a1;
- (void)didRemoveLineAtIndex:(unsigned long long)a0;
- (void)didAddLineAtIndex:(unsigned long long)a0;
- (void)highlightAllTokensWithCallback:(id /* block */)a0;
- (void)unloadPlugins;
- (void)reloadPlugins;
- (void)discardManagedReferencesForLineNumber:(unsigned long long)a0;
- (void)loadSyntaxPlugin;
- (void)loadColorSchemePlugin;
- (void)loadHighlightingPlugin;
- (id)configurationFilesForAppearance:(unsigned long long)a0;
- (id)loadPluginUsingConfigWithModuleName:(id)a0 module:(id)a1;

@end
