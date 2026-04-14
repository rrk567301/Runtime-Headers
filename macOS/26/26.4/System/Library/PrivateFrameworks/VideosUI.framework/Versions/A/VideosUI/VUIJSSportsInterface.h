@class VUIJSSportsJavascriptInterface;

@interface VUIJSSportsInterface : VUIJSObject <VUIJSSportsInterface> {
    VUIJSSportsJavascriptInterface *_implementation;
}

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0;
- (id)getTierType:(id)a0;
- (id)initWithAppStack:(id)a0;
- (BOOL)isSportsFeatureEnabled:(id)a0 :(id)a1;

@end
