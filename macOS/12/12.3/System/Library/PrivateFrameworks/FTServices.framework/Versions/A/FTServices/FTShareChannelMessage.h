@class NSString, NSData;

@interface FTShareChannelMessage : FTIDSMessage

@property (nonatomic) int messageType;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)command;
- (id)messageBody;
- (id)topic;
- (BOOL)wantsResponse;
- (long long)responseCommand;
- (BOOL)wantsAPSRetries;
- (id)userAgentHeaderString;
- (BOOL)wantsUserAgentInHeaders;
- (BOOL)highPriority;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsCompressedBody;
- (BOOL)isWebTunnelMessage;
- (BOOL)isIDSMessage;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseHeaders:(id)a0;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsIDSProtocolVersion;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;

@end
