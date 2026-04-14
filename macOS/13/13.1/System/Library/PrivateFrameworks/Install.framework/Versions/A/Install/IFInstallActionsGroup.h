@class NSString, NSMutableArray, IFDJavaScriptEngine;

@interface IFInstallActionsGroup : NSObject {
    NSMutableArray *_actions;
    NSString *_script;
    IFDJavaScriptEngine *_engine;
}

- (void)dealloc;
- (id)init;
- (id)actions;
- (void)setActions:(id)a0;
- (void)addAction:(id)a0;
- (void)setScript:(id)a0;
- (id)runWithQueueElement:(id)a0;
- (int)highestAuthorization;
- (BOOL)addActionsFromXMLElement:(id)a0 scripts:(id)a1;
- (id)jsEngine;

@end
