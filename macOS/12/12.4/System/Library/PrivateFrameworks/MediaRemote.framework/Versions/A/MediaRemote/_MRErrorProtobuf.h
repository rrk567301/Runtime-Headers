@class NSString, NSMutableArray;

@interface _MRErrorProtobuf : PBCodable <NSCopying> {
    int _code;
    NSString *_domain;
    NSString *_localizedDescription;
    NSString *_localizedFailureReason;
    NSMutableArray *_underlyingErrors;
    struct { unsigned char code : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
