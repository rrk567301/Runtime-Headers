@class NSString, NSDictionary;

@interface IMChatInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *chatIdentifier;
@property (retain, nonatomic) NSString *lastAddressedLocalHandle;
@property (retain, nonatomic) NSString *lastAddressedSIMID;
@property (nonatomic) unsigned long long unreadMessageCount;
@property (nonatomic) unsigned long long pendingIncomingSatelliteMessageCount;
@property (nonatomic) BOOL downloadingPendingSatelliteMessages;
@property (nonatomic) long long isFiltered;
@property (nonatomic) BOOL hasCancellableScheduledMessage;
@property (retain, nonatomic) NSDictionary *transcriptBackgroundDetails;
@property (retain, nonatomic) NSString *transcriptBackgroundChannelTransferGUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithChatDictionary:(id)a0;
- (void)updateWithChatDictionary:(id)a0 isPartialUpdate:(BOOL)a1;

@end
