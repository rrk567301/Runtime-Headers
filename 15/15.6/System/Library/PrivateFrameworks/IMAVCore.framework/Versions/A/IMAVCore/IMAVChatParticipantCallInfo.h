@class NSString, NSDictionary, NSData, NSNumber;

@interface IMAVChatParticipantCallInfo : NSObject

@property (nonatomic) unsigned int callID;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSData *remoteNATIP;
@property (retain, nonatomic) NSData *localNATIP;
@property (retain, nonatomic) NSData *localSKEData;
@property (retain, nonatomic) NSData *remoteSKEData;
@property (retain, nonatomic) NSData *remoteICEData;
@property (retain, nonatomic) NSData *localICEData;
@property (retain, nonatomic) NSNumber *remoteNATType;
@property (retain, nonatomic) NSNumber *localNATType;
@property (retain, nonatomic) NSString *peerCN;
@property (retain, nonatomic) NSNumber *peerProtocolVersion;
@property (readonly, nonatomic) char isFinished;
@property (nonatomic) char isBeingHandedOff;
@property (nonatomic) char isReinitiate;
@property (nonatomic) char inviteNeedsDelivery;
@property (readonly, nonatomic) char isAudioPaused;
@property (nonatomic) char isVideoPaused;
@property (retain, nonatomic) NSDictionary *relayInitiate;
@property (retain, nonatomic) NSDictionary *relayUpdate;
@property (retain, nonatomic) NSDictionary *relayCancel;
@property (nonatomic) unsigned long long localConnectionType;
@property (nonatomic) unsigned long long remoteConnectionType;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
