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
- (char)wantsResponse;
- (long long)responseCommand;
- (char)wantsBAASigning;
- (char)wantsAPSRetries;
- (char)wantsBinaryPush;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseDictionary:(id)a0;
- (void)handleResponseHeaders:(id)a0;
- (char)highPriority;
- (char)isIDSMessage;
- (char)isWebTunnelMessage;
- (char)ultraConstrainedAllowed;
- (id)userAgentHeaderString;
- (char)wantsCompressedBody;
- (char)wantsIntegerUniqueIDs;
- (char)wantsUserAgentInHeaders;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;
- (char)wantsIDSProtocolVersion;

@end
