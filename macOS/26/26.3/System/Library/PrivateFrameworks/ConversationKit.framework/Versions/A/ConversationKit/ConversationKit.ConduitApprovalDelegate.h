@interface ConversationKit.ConduitApprovalDelegate : NSObject <TUNeighborhoodActivityConduitApprovalDelegate> {
    void /* unknown type, empty encoding */ manager;
}

- (void)cancelSplitSessionApproval;
- (id)init;
- (void).cxx_destruct;
- (void)approveSplitSessionForConversation:(id)a0 requestedFromDevice:(id)a1 pullContext:(long long)a2 completion:(id /* block */)a3;

@end
