@class PDSProtoBatchRegisterResp, PDSProtoBatchRegisterReq;

@interface PDSRegisterMessage : FTIDSMessage

@property (retain, nonatomic) PDSProtoBatchRegisterReq *protoRequest;
@property (retain, nonatomic) PDSProtoBatchRegisterResp *protoResponse;
@property (nonatomic) unsigned long long regReason;

- (void).cxx_destruct;
- (char)wantsClientInfo;
- (id)additionalMessageHeaders;
- (double)anisetteHeadersTimeout;
- (id)bagKey;
- (void)handleResponseBody:(id)a0;
- (char)hasRequiredKeys:(id *)a0;
- (id)messageBodyDataOverride;
- (id)overrideContentType;
- (id)parsedIDSMessageResult;
- (char)requiresPushTokenKeys;
- (char)wantsUDID;
- (char)wantsIDSProtocolVersion;

@end
