@class NSString;

@interface IMChatInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *lastAddressedLocalHandle;
@property (retain, nonatomic) NSString *lastAddressedSIMID;
@property (nonatomic) unsigned long long unreadMessageCount;
@property (nonatomic) unsigned long long pendingIncomingSatelliteMessageCount;
@property (nonatomic) BOOL downloadingPendingSatelliteMessages;
@property (nonatomic) long long isFiltered;
@property (nonatomic) BOOL hasCancellableScheduledMessage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithChatDictionary:(id)a0;
- (void)updateWithChatDictionary:(id)a0;

@end
