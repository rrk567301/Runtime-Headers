@class NSString, NSData, HAPDataStreamTransportCommandStatusWrapper, HAPDataStreamTransportParameters;

@interface HAPDataStreamTransportSetupResponse : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPDataStreamTransportCommandStatusWrapper *status;
@property (retain, nonatomic) HAPDataStreamTransportParameters *parameters;
@property (retain, nonatomic) NSData *accessoryKeySalt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithStatus:(id)a0 parameters:(id)a1 accessoryKeySalt:(id)a2;

@end
