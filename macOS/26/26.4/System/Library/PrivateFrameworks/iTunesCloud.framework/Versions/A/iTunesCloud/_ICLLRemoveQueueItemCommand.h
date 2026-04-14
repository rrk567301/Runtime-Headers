@class NSString, NSMutableArray;

@interface _ICLLRemoveQueueItemCommand : PBCodable <NSCopying> {
    NSString *_itemId;
    NSMutableArray *_itemIdsToRemoves;
    NSString *_queueContext;
    int _removeType;
    int _revision;
    struct { unsigned char removeType : 1; unsigned char revision : 1; } _has;
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
