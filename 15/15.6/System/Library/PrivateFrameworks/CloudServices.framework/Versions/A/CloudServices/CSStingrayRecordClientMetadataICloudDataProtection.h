@class NSData;

@interface CSStingrayRecordClientMetadataICloudDataProtection : PBCodable <NSCopying> {
    struct { unsigned char icdp : 1; unsigned char icdpArmed : 1; unsigned char icdpDrop : 1; unsigned char icdpGF : 1; unsigned char icdpWalrus : 1; } _has;
}

@property (nonatomic) char hasIcdp;
@property (nonatomic) char icdp;
@property (nonatomic) char hasIcdpArmed;
@property (nonatomic) char icdpArmed;
@property (nonatomic) char hasIcdpWalrus;
@property (nonatomic) char icdpWalrus;
@property (nonatomic) char hasIcdpDrop;
@property (nonatomic) char icdpDrop;
@property (readonly, nonatomic) char hasEscrowedKeys;
@property (retain, nonatomic) NSData *escrowedKeys;
@property (nonatomic) char hasIcdpGF;
@property (nonatomic) char icdpGF;
@property (readonly, nonatomic) char hasWrappedKeys;
@property (retain, nonatomic) NSData *wrappedKeys;
@property (readonly, nonatomic) char hasDerivedTokenID;
@property (retain, nonatomic) NSData *derivedTokenID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
