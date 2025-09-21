@class NSArray, NSString;

@interface HAP2ControllerReadRequest : HAP2LoggingObject <HAP2EncodedCharacteristicRequest>

@property (readonly, nonatomic) NSArray *originalCharacteristics;
@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic, getter=isEncrypted) char encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serialize;
- (id)initWithCharacteristics:(id)a0;

@end
