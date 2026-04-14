@class NSString, NSData;

@interface FTShareChannelMessage : FTIDSMessage

@property (nonatomic) int messageType;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (id)messageBody;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)isIDSMessage;
- (void)handleResponseHeaders:(id)a0;
- (long long)responseCommand;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsBAASigning;
- (BOOL)wantsBinaryPush;
- (BOOL)isWebTunnelMessage;
- (void).cxx_destruct;
- (BOOL)wantsIDSProtocolVersion;
- (BOOL)wantsCompressedBody;
- (BOOL)highPriority;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)topic;
- (BOOL)wantsResponse;
- (BOOL)wantsAPSRetries;
- (BOOL)ultraConstrainedAllowed;
- (id)userAgentHeaderString;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;

@end
