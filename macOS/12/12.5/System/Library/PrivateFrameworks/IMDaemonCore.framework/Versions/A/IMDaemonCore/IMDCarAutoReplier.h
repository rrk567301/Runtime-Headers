@class NSString;
@protocol IMDAutoReplyDelegate;

@interface IMDCarAutoReplier : NSObject <IMDAutoReplying> {
    id<IMDAutoReplyDelegate> _replyDelegate;
}

@property (weak, nonatomic) id<IMDAutoReplyDelegate> replyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processMessages:(id)a0 inChat:(id)a1 fromIDSID:(id)a2;

@end
