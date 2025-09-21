@class NSString;

@interface HAP2EncodedEmptyResponseThread : HAP2LoggingObject <HAP2EncodedResponse>

@property (readonly, nonatomic, getter=isEncrypted) char encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
