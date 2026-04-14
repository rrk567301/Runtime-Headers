@class NSData, NSString, NSFileHandle;

@interface AppleVirtualPlatformHostKey : NSObject {
    NSData *_hostKeyData;
    NSFileHandle *_lockFileHandle;
}

@property (readonly, nonatomic) struct __SecKey { } *hostKey;
@property (readonly, nonatomic) NSData *uniqueDeviceIdentifier;
@property (readonly, nonatomic) NSString *uniqueDeviceIdentifierString;

- (id)initWithError:(id *)a0;
- (void)dealloc;
- (id)dataRepresentationWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;

@end
