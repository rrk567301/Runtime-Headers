@class IMServiceImpl, NSString;

@interface IMSatelliteUnavailableForServiceChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, nonatomic) NSString *recipientID;
@property (readonly, nonatomic) BOOL isGroupChat;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 service:(id)a1 recipientID:(id)a2 isGroupChat:(BOOL)a3;

@end
