@class NSString, CKDPRecordIdentifier, CKDPRecord;

@interface CKDPRecordMoveRequest : PBRequest <NSCopying> {
    struct { unsigned char semantics : 1; unsigned char merge : 1; } _has;
}

@property (nonatomic) char hasSemantics;
@property (nonatomic) int semantics;
@property (readonly, nonatomic) char hasOriginId;
@property (retain, nonatomic) CKDPRecordIdentifier *originId;
@property (readonly, nonatomic) char hasOriginEtag;
@property (retain, nonatomic) NSString *originEtag;
@property (readonly, nonatomic) char hasDestinationEtag;
@property (retain, nonatomic) NSString *destinationEtag;
@property (readonly, nonatomic) char hasDestinationZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *destinationZoneProtectionInfoTag;
@property (readonly, nonatomic) char hasDestinationRecordProtectionInfoTag;
@property (retain, nonatomic) NSString *destinationRecordProtectionInfoTag;
@property (readonly, nonatomic) char hasDestinationRecord;
@property (retain, nonatomic) CKDPRecord *destinationRecord;
@property (nonatomic) char hasMerge;
@property (nonatomic) char merge;

+ (id)options;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)StringAsSemantics:(id)a0;
- (id)semanticsAsString:(int)a0;

@end
