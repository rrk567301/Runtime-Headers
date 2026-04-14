@class _MRErrorProtobuf, NSString, _MRSendCommandResultHandlerDialogProtobuf, NSData;

@interface _MRSendCommandResultStatusProtobuf : PBCodable <NSCopying> {
    struct { unsigned char statusCode : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasDialog;
@property (retain, nonatomic) _MRSendCommandResultHandlerDialogProtobuf *dialog;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) _MRErrorProtobuf *error;
@property (readonly, nonatomic) BOOL hasCustomData;
@property (retain, nonatomic) NSData *customData;
@property (readonly, nonatomic) BOOL hasCustomDataType;
@property (retain, nonatomic) NSString *customDataType;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)typeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsStatusCode:(id)a0;
- (id)statusCodeAsString:(int)a0;

@end
