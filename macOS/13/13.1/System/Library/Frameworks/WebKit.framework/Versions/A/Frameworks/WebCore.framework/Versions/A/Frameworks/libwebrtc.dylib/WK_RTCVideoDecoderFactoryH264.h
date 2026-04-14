@class NSString;

@interface WK_RTCVideoDecoderFactoryH264 : NSObject <RTCVideoDecoderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createDecoder:(id)a0;
- (id)supportedCodecs;

@end
