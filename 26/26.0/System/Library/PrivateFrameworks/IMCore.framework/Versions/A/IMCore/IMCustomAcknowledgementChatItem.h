@class IMBalloonPluginDataSource, IMMessage, NSString;

@interface IMCustomAcknowledgementChatItem : IMAssociatedMessageChatItem <IMPluginChatItemProtocol>

@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (readonly, copy, nonatomic) IMMessage *message;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 sender:(id)a1;

@end
