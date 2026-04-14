@class NSData;

@interface HAPFragmentationPacket : HMFObject

@property (readonly, nonatomic) unsigned short transactionIdentifier;
@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) unsigned int offset;
@property (readonly, copy, nonatomic) NSData *data;

- (id)debugDescription;
- (id)serialize;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithData:(id)a0 transactionIdentifier:(unsigned short)a1 length:(unsigned int)a2 offset:(unsigned int)a3;
- (id)initWithFragmentedPacketData:(id)a0;

@end
