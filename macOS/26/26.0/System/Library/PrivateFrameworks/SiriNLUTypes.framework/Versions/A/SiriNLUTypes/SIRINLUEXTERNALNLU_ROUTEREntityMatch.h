@class NSString, SIRINLUEXTERNALNLU_ROUTERMatchProperties;

@interface SIRINLUEXTERNALNLU_ROUTEREntityMatch : PBCodable <NSCopying> {
    struct { unsigned char endIndex : 1; unsigned char startIndex : 1; unsigned char matchScore : 1; unsigned char matcherType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSourceItemIdentifier;
@property (retain, nonatomic) NSString *sourceItemIdentifier;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (retain, nonatomic) NSString *entityName;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) long long startIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) long long endIndex;
@property (nonatomic) BOOL hasMatchScore;
@property (nonatomic) float matchScore;
@property (readonly, nonatomic) BOOL hasMatchProperties;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERMatchProperties *matchProperties;
@property (nonatomic) BOOL hasMatcherType;
@property (nonatomic) int matcherType;
@property (readonly, nonatomic) BOOL hasOriginAppBundleId;
@property (retain, nonatomic) NSString *originAppBundleId;
@property (readonly, nonatomic) BOOL hasUserUtterance;
@property (retain, nonatomic) NSString *userUtterance;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsMatcherType:(id)a0;
- (id)matcherTypeAsString:(int)a0;

@end
