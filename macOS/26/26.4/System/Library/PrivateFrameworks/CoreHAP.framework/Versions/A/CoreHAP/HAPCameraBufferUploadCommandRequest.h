@class NSString, HAPCameraBufferUploadStopActionWrapper, HAPCameraBufferUploadCommandTypeWrapper, HAPTLVUnsignedNumberValue;

@interface HAPCameraBufferUploadCommandRequest : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *sessionID;
@property (retain, nonatomic) HAPCameraBufferUploadCommandTypeWrapper *command;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *start;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *stop;
@property (retain, nonatomic) HAPCameraBufferUploadStopActionWrapper *stopAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)serializeWithError:(id *)a0;
- (id)initWithSessionID:(id)a0 command:(id)a1 start:(id)a2 stop:(id)a3 stopAction:(id)a4;

@end
