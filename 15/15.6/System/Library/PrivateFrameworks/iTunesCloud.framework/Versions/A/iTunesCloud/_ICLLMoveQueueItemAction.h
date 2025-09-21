@class NSString, _ICLLQueueQuery;

@interface _ICLLMoveQueueItemAction : PBCodable <NSCopying> {
    NSString *_itemId;
    int _position;
    _ICLLQueueQuery *_queueQuery;
    int _revision;
    struct { unsigned char position : 1; unsigned char revision : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
