@class NSString, NSArray, NSMutableDictionary;

@interface VCMediaStreamMultiwayConfig : NSObject {
    struct { unsigned char maxNetworkBitrate : 1; unsigned char maxMediaBitrate : 1; unsigned char maxPacketsPerSecond : 1; unsigned char idsStreamID : 1; unsigned char qualityIndex : 1; unsigned char maxIDSStreamIdCount : 1; unsigned char repairedStreamID : 1; unsigned char repairedMaxNetworkBitrate : 1; unsigned char v2StreamID : 1; } _has;
}

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *participantId;
@property (nonatomic) unsigned long long remoteIDSParticipantID;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (readonly, nonatomic) char hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (readonly, nonatomic) char hasMaxMediaBitrate;
@property (nonatomic) float maxPacketsPerSecond;
@property (readonly, nonatomic) char hasMaxPacketsPerSecond;
@property (nonatomic) unsigned short idsStreamID;
@property (nonatomic) unsigned short v2StreamID;
@property (readonly, nonatomic) char hasIdsStreamID;
@property (readonly, nonatomic) char hasV2StreamID;
@property (nonatomic) unsigned int qualityIndex;
@property (readonly, nonatomic) char hasQualityIndex;
@property (nonatomic) unsigned int maxIDSStreamIdCount;
@property (readonly, nonatomic) char hasMaxIDSStreamIdCount;
@property (nonatomic) unsigned short repairedStreamID;
@property (readonly, nonatomic) char hasRepairedStreamID;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (readonly, nonatomic) char hasRepairedMaxNetworkBitrate;
@property (nonatomic) char startOnDemand;
@property (readonly, nonatomic) NSArray *streamIds;
@property (nonatomic) char isOneToOne;
@property (nonatomic) char shouldIgnoreRTPHeaderExtensions;
@property (nonatomic) unsigned int streamGroupID;
@property (nonatomic) unsigned int negotiationProtocolMask;
@property (nonatomic) int repairedFECLevel;
@property (readonly, nonatomic) NSMutableDictionary *txPayloadMap;
@property (readonly, nonatomic) NSMutableDictionary *rxPayloadMap;

- (void)dealloc;
- (id)init;
- (void)addRxPayloadType:(int)a0 networkPayload:(unsigned int)a1;
- (void)addTxPayloadType:(int)a0 networkPayload:(unsigned int)a1;

@end
