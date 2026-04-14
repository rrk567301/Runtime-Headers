@class _ICLLRadioSource, NSMutableArray, _ICLLQueueQuery;

@interface _ICLLAddQueueItemsAction : PBCodable <NSCopying> {
    NSMutableArray *_items;
    int _position;
    int _positionType;
    _ICLLQueueQuery *_queueQuery;
    _ICLLRadioSource *_radioSource;
    int _revision;
    struct { unsigned char position : 1; unsigned char positionType : 1; unsigned char revision : 1; } _has;
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
