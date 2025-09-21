@class NSString, NSMutableArray;

@interface AWDMMCSError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) char hasCode;
@property (nonatomic) int code;
@property (retain, nonatomic) NSMutableArray *underlyingErrors;

+ (Class)underlyingErrorsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
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
