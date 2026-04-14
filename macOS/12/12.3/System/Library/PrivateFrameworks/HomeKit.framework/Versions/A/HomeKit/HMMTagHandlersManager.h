@class NSMutableDictionary;

@interface HMMTagHandlersManager : NSObject {
    NSMutableDictionary *_handlers;
}

- (id)init;
- (void).cxx_destruct;
- (void)addHandler:(id /* block */)a0 forTagName:(id)a1;
- (id)handlersForTagName:(id)a0;

@end
