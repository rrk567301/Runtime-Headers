@class _MRErrorProtobuf, NSString, _MRSendCommandResultHandlerDialogProtobuf, NSData;

@interface _MRSendCommandResultStatusProtobuf : PBCodable <NSCopying> {
    struct { unsigned char statusCode : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasDialog;
@property (retain, nonatomic) _MRSendCommandResultHandlerDialogProtobuf *dialog;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) _MRErrorProtobuf *error;
@property (readonly, nonatomic) char hasCustomData;
@property (retain, nonatomic) NSData *customData;
@property (readonly, nonatomic) char hasCustomDataType;
@property (retain, nonatomic) NSString *customDataType;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsStatusCode:(id)a0;
- (id)statusCodeAsString:(int)a0;

@end
