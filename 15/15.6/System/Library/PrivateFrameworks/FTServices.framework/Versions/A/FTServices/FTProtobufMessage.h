@class NSString, NSData;

@interface FTProtobufMessage : FTIDSMessage

@property (retain, nonatomic) NSString *pushTopic;
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
- (id)userAgentHeaderString;
- (char)wantsCompressedBody;
- (char)wantsIntegerUniqueIDs;
- (char)wantsUserAgentInHeaders;
- (id)initWithPushTopic:(id)a0 protoData:(id)a1;
- (char)wantsIDSProtocolVersion;

@end
