@class HMFPairingIdentity;

@interface HMDLegacyModelContainer : HMBModelContainer

@property (readonly, nonatomic) HMFPairingIdentity *pairingIdentity;

- (id)modelFromData:(id)a0 encoding:(unsigned long long)a1 storageLocation:(unsigned long long)a2 type:(id)a3 error:(id *)a4;
- (id)decodePropertyValueFromData:(id)a0 forProperty:(id)a1 field:(id)a2 storageLocation:(unsigned long long)a3 error:(id *)a4;
- (id)decryptData:(id)a0 decompress:(BOOL)a1 error:(id *)a2;
- (id)encodePropertyValue:(id)a0 forProperty:(id)a1 field:(id)a2 storageLocation:(unsigned long long)a3 error:(id *)a4;
- (void).cxx_destruct;
- (Class)modelClassForTypeName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataVersion:(id)a0 legacyDataVersion:(id)a1 pairingIdentity:(id)a2;
- (id)encryptData:(id)a0 compress:(BOOL)a1 error:(id *)a2;

@end
