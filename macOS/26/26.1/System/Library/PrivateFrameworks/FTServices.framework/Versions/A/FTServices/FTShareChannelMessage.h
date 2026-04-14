@class NSString, NSData;

@interface FTShareChannelMessage : FTIDSMessage

@property (nonatomic) int messageType;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (id)topic;
- (BOOL)highPriority;
- (BOOL)wantsCompressedBody;
- (long long)responseCommand;
- (BOOL)wantsBinaryPush;
- (void)handleResponseHeaders:(id)a0;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsIDSProtocolVersion;
- (BOOL)wantsBAASigning;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (long long)command;
- (BOOL)isWebTunnelMessage;
- (BOOL)isIDSMessage;
- (BOOL)wantsResponse;
- (BOOL)wantsAPSRetries;
- (BOOL)ultraConstrainedAllowed;
- (id)userAgentHeaderString;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;

@end
