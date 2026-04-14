@class NSString, NSData;

@interface FTShareChannelMessage : FTIDSMessage

@property (nonatomic) int messageType;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (BOOL)highPriority;
- (long long)responseCommand;
- (BOOL)wantsBAASigning;
- (void)handleResponseHeaders:(id)a0;
- (void).cxx_destruct;
- (BOOL)wantsIDSProtocolVersion;
- (BOOL)wantsBinaryPush;
- (id)additionalMessageHeadersForOutgoingPush;
- (BOOL)isIDSMessage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (BOOL)isWebTunnelMessage;
- (BOOL)wantsCompressedBody;
- (long long)command;
- (void)handleResponseDictionary:(id)a0;
- (id)topic;
- (BOOL)wantsResponse;
- (BOOL)wantsAPSRetries;
- (BOOL)ultraConstrainedAllowed;
- (id)userAgentHeaderString;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;

@end
