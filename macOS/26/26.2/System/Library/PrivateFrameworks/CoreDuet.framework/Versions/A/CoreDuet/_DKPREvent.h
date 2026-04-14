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

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
