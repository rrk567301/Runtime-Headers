@class NSString;

@interface TRIBAACertBase64Encoder : NSObject <TRIBase64Encoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)base64EncodeData:(id)a0 urlSafe:(BOOL)a1;

@end
