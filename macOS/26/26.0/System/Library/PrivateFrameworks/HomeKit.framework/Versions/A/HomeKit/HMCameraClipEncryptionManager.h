@class NSData;

@interface HMCameraClipEncryptionManager : NSObject

@property (readonly, copy) NSData *key;

- (id)init;
- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (id)encryptedDataContextFromData:(id)a0;

@end
