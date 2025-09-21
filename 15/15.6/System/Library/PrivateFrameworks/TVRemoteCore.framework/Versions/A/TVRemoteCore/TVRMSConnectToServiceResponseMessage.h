@class TVRMSControlInterfaceMessage;

@interface TVRMSConnectToServiceResponseMessage : PBCodable <NSCopying> {
    struct { unsigned char responseCode : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) char hasResponseCode;
@property (nonatomic) int responseCode;
@property (nonatomic) char hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (readonly, nonatomic) char hasControlInterface;
@property (retain, nonatomic) TVRMSControlInterfaceMessage *controlInterface;

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
