@class _DKPRValue, NSString, _DKPRStream, NSMutableArray, _DKPRSource;

@interface _DKPREvent : PBCodable <NSCopying> {
    long long _compatibilityVersion;
    double _confidence;
    double _creationDate;
    double _endDate;
    double _startDate;
    long long _timeZone;
    NSString *_identifier;
    NSMutableArray *_metadatas;
    _DKPRSource *_source;
    _DKPRStream *_stream;
    _DKPRValue *_value;
    struct { unsigned char compatibilityVersion : 1; unsigned char confidence : 1; unsigned char creationDate : 1; unsigned char timeZone : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
