@class NSString, NSData;

@interface FTProtobufMessage : FTIDSMessage

@property (retain, nonatomic) NSString *pushTopic;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (long long)responseCommand;
- (BOOL)isWebTunnelMessage;
- (BOOL)wantsIDSProtocolVersion;
- (BOOL)isIDSMessage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsBinaryPush;
- (long long)command;
- (BOOL)wantsBAASigning;
- (id)messageBody;
- (void)handleResponseHeaders:(id)a0;
- (BOOL)highPriority;
- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsCompressedBody;
- (id)topic;
- (BOOL)wantsResponse;
- (BOOL)wantsAPSRetries;
- (id)userAgentHeaderString;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithPushTopic:(id)a0 protoData:(id)a1;

@end
