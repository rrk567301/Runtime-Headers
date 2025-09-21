@class NSString, _TtC12SmartReplies21SRSmartRepliesMessage, NSDate;

@interface SROSmartRepliesMessage : NSObject {
    _TtC12SmartReplies21SRSmartRepliesMessage *_underlyingMessage;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *senderIdentifier;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic, getter=isTapBack) char tapBack;
@property (nonatomic, getter=isEmote) char emote;
@property (nonatomic, getter=isRead) char read;
@property (copy, nonatomic) NSDate *dateSent;

- (id)init;
- (void).cxx_destruct;

@end
