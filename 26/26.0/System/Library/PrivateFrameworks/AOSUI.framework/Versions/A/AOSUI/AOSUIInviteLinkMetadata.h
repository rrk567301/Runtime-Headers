@class LPImage, AAMessagesInviteContext, LPLinkMetadata;

@interface AOSUIInviteLinkMetadata : NSObject

@property (readonly, nonatomic) AAMessagesInviteContext *context;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *icon;
@property (readonly, nonatomic) LPLinkMetadata *bubbleMetadata;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
