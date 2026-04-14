@class NSMutableArray, NSResponder, ASKScriptController;

@interface ASKScriptConnection : NSObject {
    NSResponder *_responder;
    ASKScriptController *_scriptController;
    NSMutableArray *_eventHandlers;
}

- (id)responder;
- (void)setResponder:(id)a0;
- (id)initWithController:(id)a0;
- (void)dealloc;
- (id)init;
- (void)addEventHandler_ask:(id)a0;
- (id)eventHandlers_ask;
- (id)initWithController:(id)a0 responder:(id)a1;
- (void)removeEventHandler_ask:(id)a0;
- (id)scriptController_ask;
- (void)setEventHandlers_ask:(id)a0;
- (void)setScriptController_ask:(id)a0;

@end
