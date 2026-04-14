@class DHKey, NGMECDHPublicPreKey;

@interface NGMFullPrekey : NSObject

@property (readonly, nonatomic) DHKey *dhKey;
@property (readonly, nonatomic) NGMECDHPublicPreKey *publicPrekey;

+ (id)fullPrekeyForTestingSignedBy:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)delete;
- (id)ecdhKeyCTKObject;
- (id)initWithPBPrekey:(id)a0 verifySignedBy:(id)a1 error:(id *)a2;
- (id)initWithPrekeySignedBy:(id)a0 error:(id *)a1;
- (id)pbDevicePrekey;

@end
