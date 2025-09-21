@class NSString, CKDPRecordIdentifier, CKDPRecordType, CKDPRecord;

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) char hasRecordType;
@property (retain, nonatomic) CKDPRecordType *recordType;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasRecord;
@property (retain, nonatomic) CKDPRecord *record;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
