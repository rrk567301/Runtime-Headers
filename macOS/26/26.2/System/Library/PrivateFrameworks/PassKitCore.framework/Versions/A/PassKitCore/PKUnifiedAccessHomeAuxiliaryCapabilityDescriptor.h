@class NSData;

@interface PKUnifiedAccessHomeAuxiliaryCapabilityDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *readerGroupIdentifier;
@property (readonly, copy, nonatomic) NSData *readerGroupPublicKey;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithReaderGroupIdentifier:(id)a0 readerGroupPublicKey:(id)a1;

@end
