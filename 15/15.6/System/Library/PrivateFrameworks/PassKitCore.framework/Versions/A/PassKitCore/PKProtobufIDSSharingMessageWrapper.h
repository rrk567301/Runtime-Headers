@class NSString, NSData;

@interface PKProtobufIDSSharingMessageWrapper : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) NSData *underlyingMessageData;

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
