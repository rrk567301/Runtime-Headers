@class NSString, NSMutableArray;

@interface _ICLLQueue : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _storefronts;
    NSString *_currentRadioStationId;
    int _demarkationPos;
    int _explicitSetting;
    NSMutableArray *_items;
    NSString *_queueId;
    int _revision;
    struct { unsigned char demarkationPos : 1; unsigned char explicitSetting : 1; unsigned char revision : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
