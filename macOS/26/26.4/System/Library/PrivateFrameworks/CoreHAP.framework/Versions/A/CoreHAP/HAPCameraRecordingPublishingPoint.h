@class NSString, NSData;

@interface HAPCameraRecordingPublishingPoint : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSString *URL;
@property (retain, nonatomic) NSData *serverCertificate;
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
- (id)initWithURL:(id)a0 serverCertificate:(id)a1;

@end
