@class NSString, NSMutableArray, IFDJavaScriptEngine;

@interface IFInstallActionsGroup : NSObject {
    NSMutableArray *_actions;
    NSString *_script;
    IFDJavaScriptEngine *_engine;
}

- (id)actions;
- (void)addAction:(id)a0;
- (void)setActions:(id)a0;
- (id)init;
- (void)setScript:(id)a0;
- (void)dealloc;
- (BOOL)addActionsFromXMLElement:(id)a0 scripts:(id)a1;
- (int)highestAuthorization;
- (id)jsEngine;
- (id)runWithQueueElement:(id)a0;

@end
