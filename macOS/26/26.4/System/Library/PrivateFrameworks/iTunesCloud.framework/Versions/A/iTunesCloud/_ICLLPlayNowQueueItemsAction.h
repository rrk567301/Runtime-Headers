@class _ICLLQueueQuery, NSString, NSMutableArray, _ICLLRadioSource;

@interface _ICLLPlayNowQueueItemsAction : PBCodable <NSCopying> {
    NSMutableArray *_items;
    int _position;
    NSString *_preferredPlayItemId;
    _ICLLQueueQuery *_queueQuery;
    _ICLLRadioSource *_radioSource;
    int _revision;
    struct { unsigned char position : 1; unsigned char revision : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
