@interface NTPBReportConcernSubmission : PBCodable <NSCopying> {
    struct { unsigned char cancelLocation : 1; unsigned char reportConcernLocation : 1; unsigned char resultType : 1; } _has;
}

@property (nonatomic) char hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) char hasReportConcernLocation;
@property (nonatomic) int reportConcernLocation;
@property (nonatomic) char hasCancelLocation;
@property (nonatomic) int cancelLocation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
