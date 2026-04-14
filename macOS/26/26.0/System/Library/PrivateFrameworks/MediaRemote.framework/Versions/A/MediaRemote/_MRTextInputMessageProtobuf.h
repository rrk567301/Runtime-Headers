@class NSString;

@interface _MRTextInputMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char actionType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsActionType:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
