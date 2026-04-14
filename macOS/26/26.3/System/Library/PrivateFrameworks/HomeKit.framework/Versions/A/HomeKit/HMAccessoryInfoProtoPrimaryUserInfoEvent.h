@class NSString;

@interface HMAccessoryInfoProtoPrimaryUserInfoEvent : PBCodable <NSCopying> {
    struct { unsigned char selectionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (nonatomic) BOOL hasSelectionType;
@property (nonatomic) int selectionType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsSelectionType:(id)a0;
- (id)selectionTypeAsString:(int)a0;

@end
