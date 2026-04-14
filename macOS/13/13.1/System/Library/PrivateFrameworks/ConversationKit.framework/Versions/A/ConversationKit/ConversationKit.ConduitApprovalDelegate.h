@interface ConversationKit.ConduitApprovalDelegate : NSObject <TUNeighborhoodActivityConduitApprovalDelegate> {
    void /* unknown type, empty encoding */ manager;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelSplitSessionApproval;
- (void)approveSplitSessionForConversation:(id)a0 requestedFromDevice:(id)a1 pullContext:(long long)a2 completion:(id /* block */)a3;

@end
