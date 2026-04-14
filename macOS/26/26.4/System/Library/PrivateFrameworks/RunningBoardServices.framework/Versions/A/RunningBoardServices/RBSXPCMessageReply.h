@class RBSXPCMessageContext, RBSXPCCoder;

@interface RBSXPCMessageReply : NSObject {
    RBSXPCMessageContext *_context;
    BOOL _sent;
}

@property (readonly, nonatomic) RBSXPCCoder *payload;

- (void)prepareForHandoff;
- (void)send;
- (void).cxx_destruct;

@end
