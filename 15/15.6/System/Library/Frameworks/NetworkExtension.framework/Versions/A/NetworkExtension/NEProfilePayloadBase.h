@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate>

@property (retain, nonatomic) NSDictionary *payloadAtom;
@property (retain) NSMutableDictionary *pendingCertificates;
@property (retain) NSDictionary *pluginUpgradeInfo;

- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (id)validatePayload;
- (char)addCertificatePending:(id)a0 certificateTag:(id)a1;
- (char)addCertificatePending:(id)a0 certificateTag:(id)a1 accessGroup:(id)a2;
- (id)getPreprocessedPayloadContents;
- (char)setPostprocessedPayloadContents:(id)a0;

@end
