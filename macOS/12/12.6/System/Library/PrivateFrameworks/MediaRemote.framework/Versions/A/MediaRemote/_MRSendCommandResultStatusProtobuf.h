@class _MRErrorProtobuf, NSString, _MRSendCommandResultHandlerDialogProtobuf, NSData;

@interface _MRSendCommandResultStatusProtobuf : PBCodable <NSCopying> {
    NSData *_customData;
    NSString *_customDataType;
    _MRSendCommandResultHandlerDialogProtobuf *_dialog;
    _MRErrorProtobuf *_error;
    int _statusCode;
    int _type;
    struct { unsigned char statusCode : 1; unsigned char type : 1; } _has;
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
