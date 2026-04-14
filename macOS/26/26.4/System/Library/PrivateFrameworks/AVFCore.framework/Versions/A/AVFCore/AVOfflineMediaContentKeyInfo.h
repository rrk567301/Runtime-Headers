@class NSString, NSData;

@interface AVOfflineMediaContentKeyInfo : NSObject

@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) long long keySystem;
@property (readonly, nonatomic) long long encryptionMethod;
@property (readonly, nonatomic) NSData *initializationVector;

- (void)dealloc;
- (id)initWithKeyIdentifier:(id)a0 keySystem:(long long)a1 encryptionMethod:(long long)a2 initializationVector:(id)a3;

@end
