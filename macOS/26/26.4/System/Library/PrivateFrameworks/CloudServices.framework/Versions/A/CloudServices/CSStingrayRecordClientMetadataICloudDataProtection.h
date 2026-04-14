@class NSData;

@interface CSStingrayRecordClientMetadataICloudDataProtection : PBCodable <NSCopying> {
    struct { unsigned char icdp : 1; unsigned char icdpArmed : 1; unsigned char icdpDBRv2 : 1; unsigned char icdpDrop : 1; unsigned char icdpWalrus : 1; } _has;
}

@property (nonatomic) BOOL hasIcdp;
@property (nonatomic) BOOL icdp;
@property (nonatomic) BOOL hasIcdpArmed;
@property (nonatomic) BOOL icdpArmed;
@property (nonatomic) BOOL hasIcdpWalrus;
@property (nonatomic) BOOL icdpWalrus;
@property (nonatomic) BOOL hasIcdpDrop;
@property (nonatomic) BOOL icdpDrop;
@property (readonly, nonatomic) BOOL hasEscrowedKeys;
@property (retain, nonatomic) NSData *escrowedKeys;
@property (readonly, nonatomic) BOOL hasWrappedKeys;
@property (retain, nonatomic) NSData *wrappedKeys;
@property (nonatomic) BOOL hasIcdpDBRv2;
@property (nonatomic) BOOL icdpDBRv2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
