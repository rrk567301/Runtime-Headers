@class NSString, SIRINLUEXTERNALNLU_ROUTERMatchProperties;

@interface SIRINLUEXTERNALNLU_ROUTEREntityMatch : PBCodable <NSCopying> {
    struct { unsigned char endIndex : 1; unsigned char startIndex : 1; unsigned char matchScore : 1; unsigned char matcherType : 1; } _has;
}

@property (readonly, nonatomic) char hasSourceItemIdentifier;
@property (retain, nonatomic) NSString *sourceItemIdentifier;
@property (readonly, nonatomic) char hasEntityName;
@property (retain, nonatomic) NSString *entityName;
@property (nonatomic) char hasStartIndex;
@property (nonatomic) long long startIndex;
@property (nonatomic) char hasEndIndex;
@property (nonatomic) long long endIndex;
@property (nonatomic) char hasMatchScore;
@property (nonatomic) float matchScore;
@property (readonly, nonatomic) char hasMatchProperties;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERMatchProperties *matchProperties;
@property (nonatomic) char hasMatcherType;
@property (nonatomic) int matcherType;
@property (readonly, nonatomic) char hasOriginAppBundleId;
@property (retain, nonatomic) NSString *originAppBundleId;
@property (readonly, nonatomic) char hasUserUtterance;
@property (retain, nonatomic) NSString *userUtterance;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

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
- (int)StringAsMatcherType:(id)a0;
- (id)matcherTypeAsString:(int)a0;

@end
