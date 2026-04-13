@class NSData;

@interface _MRRemoteTextInputMessageProtobuf : PBCodable <NSCopying> {
    double _timestamp;
    unsigned long long _version;
    struct { unsigned char timestamp : 1; unsigned char version : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
