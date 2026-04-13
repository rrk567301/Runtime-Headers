@class NSString, NSMutableArray, _ICLLQueueQuery;

@interface _ICLLPlayNowQueueItemsAction : PBCodable <NSCopying> {
    NSMutableArray *_items;
    int _position;
    NSString *_preferredPlayItemId;
    _ICLLQueueQuery *_queueQuery;
    int _revision;
    struct { unsigned char position : 1; unsigned char revision : 1; } _has;
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
