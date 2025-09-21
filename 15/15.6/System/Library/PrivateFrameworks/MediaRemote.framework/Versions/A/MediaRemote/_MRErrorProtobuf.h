@class NSString, NSMutableArray;

@interface _MRErrorProtobuf : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) char hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) char hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) char hasLocalizedFailureReason;
@property (retain, nonatomic) NSString *localizedFailureReason;
@property (retain, nonatomic) NSMutableArray *underlyingErrors;

+ (Class)underlyingErrorsType;

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
- (void)addUnderlyingErrors:(id)a0;
- (void)clearUnderlyingErrors;
- (id)underlyingErrorsAtIndex:(unsigned long long)a0;
- (unsigned long long)underlyingErrorsCount;

@end
