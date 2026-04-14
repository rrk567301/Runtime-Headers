@class PDSProtoBatchRegisterResp, PDSProtoBatchRegisterReq;

@interface PDSRegisterMessage : FTIDSMessage

@property (retain, nonatomic) PDSProtoBatchRegisterReq *protoRequest;
@property (retain, nonatomic) PDSProtoBatchRegisterResp *protoResponse;
@property (nonatomic) unsigned long long regReason;

- (void).cxx_destruct;
- (BOOL)wantsIDSProtocolVersion;
- (id)bagKey;
- (BOOL)wantsClientInfo;
- (id)additionalMessageHeaders;
- (double)anisetteHeadersTimeout;
- (void)handleResponseBody:(id)a0;
- (BOOL)hasRequiredKeys:(id *)a0;
- (id)messageBodyDataOverride;
- (id)overrideContentType;
- (id)parsedIDSMessageResult;
- (BOOL)requiresPushTokenKeys;
- (BOOL)wantsUDID;

@end
