@class NSString;

@interface WFREPBError : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;
@property (readonly, nonatomic) BOOL hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) BOOL hasLocalizedFailureReason;
@property (retain, nonatomic) NSString *localizedFailureReason;

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
