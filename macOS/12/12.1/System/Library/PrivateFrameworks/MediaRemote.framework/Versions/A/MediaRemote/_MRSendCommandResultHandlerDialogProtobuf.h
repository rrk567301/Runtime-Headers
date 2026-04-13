@class NSString, NSMutableArray;

@interface _MRSendCommandResultHandlerDialogProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_actions;
    NSString *_localizedMessage;
    NSString *_localizedTitle;
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
