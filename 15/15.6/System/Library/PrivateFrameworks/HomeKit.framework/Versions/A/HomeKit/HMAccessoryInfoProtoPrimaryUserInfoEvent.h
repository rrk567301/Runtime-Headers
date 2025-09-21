@class NSString;

@interface HMAccessoryInfoProtoPrimaryUserInfoEvent : PBCodable <NSCopying> {
    struct { unsigned char selectionType : 1; } _has;
}

@property (readonly, nonatomic) char hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (nonatomic) char hasSelectionType;
@property (nonatomic) int selectionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSelectionType:(id)a0;
- (id)selectionTypeAsString:(int)a0;

@end
