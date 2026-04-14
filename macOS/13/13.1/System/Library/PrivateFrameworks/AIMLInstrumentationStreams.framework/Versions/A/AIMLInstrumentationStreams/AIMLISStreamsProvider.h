@class SIComponentIdentifier, AIMLISEventGraph, NSError;

@interface AIMLISStreamsProvider : NSObject {
    void /* unknown type, empty encoding */ provider;
}

- (id)init;
- (void).cxx_destruct;
- (id)events;
- (id)eventGraphsWithWindowLength:(double)a0;
- (id)eventGraphs;
- (id)connectedComponentGroupsWithWindowLength:(double)a0;
- (id)siriTurns;
- (id)siriConversations;
- (void)searchForEventGraphWithComponentIdentifier:(SIComponentIdentifier *)a0 windowLength:(double)a1 completionHandler:(void (^)(AIMLISEventGraph *, NSError *))a2;
- (void)searchForEventGraphWithComponentIdentifier:(SIComponentIdentifier *)a0 completionHandler:(void (^)(AIMLISEventGraph *, NSError *))a1;

@end
