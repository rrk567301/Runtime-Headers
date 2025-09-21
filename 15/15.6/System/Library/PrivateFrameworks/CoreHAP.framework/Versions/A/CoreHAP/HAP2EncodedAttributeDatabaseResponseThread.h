@class NSDictionary, NSString;

@interface HAP2EncodedAttributeDatabaseResponseThread : HAP2EncodedResponseThread <HAP2EncodedAttributeDatabaseResponse>

@property (readonly, nonatomic) NSDictionary *attributeDatabase;
@property (readonly, nonatomic, getter=isEncrypted) char encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBTLEResponse:(id)a0 attributeDatabase:(id)a1;

@end
