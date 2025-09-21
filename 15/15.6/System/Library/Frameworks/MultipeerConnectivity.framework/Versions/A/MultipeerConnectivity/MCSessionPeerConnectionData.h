@class NSData;

@interface MCSessionPeerConnectionData : NSObject

@property (retain, nonatomic) NSData *gckSessionConnectionData;
@property (nonatomic) long long encryptionPreference;
@property (nonatomic) char hasIdentitySet;

+ (id)connectionDataSegmentWithEncryptionPreference:(long long)a0 identitySet:(char)a1 gckSessionConnectionDataBytes:(void *)a2 gckSessionConnectionDataLength:(unsigned long long)a3;

- (void)dealloc;
- (id)initWithConnectionDataBlob:(id)a0;
- (char)parseConnectionDataBlob:(id)a0;
- (char)parseConnectionDataSegmentWithBytes:(char *)a0 withLength:(unsigned long long)a1;

@end
