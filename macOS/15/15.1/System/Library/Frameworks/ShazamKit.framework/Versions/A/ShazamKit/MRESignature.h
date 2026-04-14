@class NSData;

@interface MRESignature : NSObject

@property (readonly) unsigned long long trackID;
@property (readonly) NSData *signatureData;

- (void)dealloc;
- (id)initWithSignatureData:(id)a0 trackID:(unsigned long long)a1;

@end
