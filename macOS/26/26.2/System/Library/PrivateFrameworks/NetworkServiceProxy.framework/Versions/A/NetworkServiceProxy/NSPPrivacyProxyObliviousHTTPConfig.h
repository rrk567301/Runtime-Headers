@class NSData, NSMutableArray;

@interface NSPPrivacyProxyObliviousHTTPConfig : PBCodable <NSCopying> {
    struct { unsigned char obliviousHTTPType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *obliviousTargets;
@property (retain, nonatomic) NSData *obliviousHTTPConfig;
@property (nonatomic) BOOL hasObliviousHTTPType;
@property (nonatomic) int obliviousHTTPType;
@property (readonly, nonatomic) BOOL hasTransparencyKeyBundle;
@property (retain, nonatomic) NSData *transparencyKeyBundle;
@property (readonly, nonatomic) BOOL hasTransparencyProof;
@property (retain, nonatomic) NSData *transparencyProof;
@property (readonly, nonatomic) BOOL hasTransparencyInternalProof;
@property (retain, nonatomic) NSData *transparencyInternalProof;

+ (Class)obliviousTargetsType;

- (void)clearObliviousTargets;
- (void)writeTo:(id)a0;
- (void)addObliviousTargets:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)obliviousHTTPTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)obliviousTargetsCount;
- (id)obliviousTargetsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (int)StringAsObliviousHTTPType:(id)a0;

@end
