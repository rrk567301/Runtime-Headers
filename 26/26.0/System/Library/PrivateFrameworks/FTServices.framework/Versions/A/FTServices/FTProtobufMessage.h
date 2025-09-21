@class NSString, NSData;

@interface FTProtobufMessage : FTIDSMessage

@property (retain, nonatomic) NSString *pushTopic;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (BOOL)highPriority;
- (long long)command;
- (BOOL)wantsBAASigning;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)handleResponseHeaders:(id)a0;
- (id)topic;
- (BOOL)wantsBinaryPush;
- (long long)responseCommand;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)isWebTunnelMessage;
- (id)additionalMessageHeadersForOutgoingPush;
- (BOOL)wantsIDSProtocolVersion;
- (BOOL)wantsCompressedBody;
- (BOOL)isIDSMessage;
- (id)messageBody;
- (void).cxx_destruct;
- (BOOL)wantsResponse;
- (BOOL)wantsAPSRetries;
- (id)userAgentHeaderString;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithPushTopic:(id)a0 protoData:(id)a1;

@end
