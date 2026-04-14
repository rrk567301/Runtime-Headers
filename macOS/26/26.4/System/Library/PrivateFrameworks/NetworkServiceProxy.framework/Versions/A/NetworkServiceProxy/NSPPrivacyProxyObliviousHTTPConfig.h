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

- (void)addObliviousTargets:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)obliviousTargetsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (int)StringAsObliviousHTTPType:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)clearObliviousTargets;
- (void)writeTo:(id)a0;
- (unsigned long long)obliviousTargetsCount;
- (id)obliviousHTTPTypeAsString:(int)a0;

@end
