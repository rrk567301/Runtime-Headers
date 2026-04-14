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

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
