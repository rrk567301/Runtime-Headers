@class NSString;

@interface C2MPPathInfo : PBCodable <NSCopying> {
    struct { unsigned char applicationBytesReceived : 1; unsigned char applicationBytesSent : 1; } _has;
}

@property (readonly, nonatomic) char hasInterfaceType;
@property (retain, nonatomic) NSString *interfaceType;
@property (readonly, nonatomic) char hasRadioType;
@property (retain, nonatomic) NSString *radioType;
@property (nonatomic) char hasApplicationBytesSent;
@property (nonatomic) unsigned long long applicationBytesSent;
@property (nonatomic) char hasApplicationBytesReceived;
@property (nonatomic) unsigned long long applicationBytesReceived;

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

@end
