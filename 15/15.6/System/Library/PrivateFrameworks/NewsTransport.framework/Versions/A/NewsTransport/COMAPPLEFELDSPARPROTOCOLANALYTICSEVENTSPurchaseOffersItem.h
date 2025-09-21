@class NSString;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSPurchaseOffersItem : PBCodable <NSCopying> {
    struct { unsigned char purchaseType : 1; } _has;
}

@property (readonly, nonatomic) char hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (nonatomic) char hasPurchaseType;
@property (nonatomic) int purchaseType;

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
- (int)StringAsPurchaseType:(id)a0;
- (id)purchaseTypeAsString:(int)a0;

@end
