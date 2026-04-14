@class SVXPlistBinaryParser, SVXAFClientLiteFactory;

@interface SVXVoiceMailMarkAsReadHandler : NSObject {
    SVXAFClientLiteFactory *_afClientLiteFactory;
    SVXPlistBinaryParser *_plistBinaryParser;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithClientLiteFactory:(id)a0 plistBinaryParser:(id)a1;
- (void)markVoiceMailAsRead:(id)a0 forRemoteDevice:(id)a1;

@end
