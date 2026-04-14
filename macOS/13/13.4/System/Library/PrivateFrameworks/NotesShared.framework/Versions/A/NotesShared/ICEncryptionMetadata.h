@class NSData, NSString;

@interface ICEncryptionMetadata : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long cipherVersion;
@property (retain, nonatomic) NSString *accountKeyIdentifier;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithCipherVersion:(unsigned long long)a0 accountKeyIdentifier:(id)a1;

@end
