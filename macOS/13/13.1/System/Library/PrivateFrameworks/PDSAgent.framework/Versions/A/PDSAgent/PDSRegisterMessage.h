@class PDSProtoBatchRegisterResp, PDSProtoBatchRegisterReq;

@interface PDSRegisterMessage : FTIDSMessage

@property (retain, nonatomic) PDSProtoBatchRegisterReq *protoRequest;
@property (retain, nonatomic) PDSProtoBatchRegisterResp *protoResponse;
@property (nonatomic) unsigned long long regReason;

- (void).cxx_destruct;
- (double)anisetteHeadersTimeout;
- (id)messageBodyDataOverride;
- (id)overrideContentType;
- (id)parsedIDSMessageResult;
- (BOOL)wantsClientInfo;
- (BOOL)wantsUDID;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)requiresPushTokenKeys;
- (id)bagKey;
- (id)additionalMessageHeaders;
- (void)handleResponseBody:(id)a0;
- (BOOL)wantsIDSProtocolVersion;

@end
