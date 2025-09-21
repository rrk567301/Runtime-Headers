@class NSData, NSString;

@interface PKProtobufAppletSubcredentialSharingInvitation : PBCodable <NSCopying> {
    struct { unsigned char deviceType : 1; unsigned char entitlement : 1; unsigned char supportedRadioTechnologies : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasInvitation;
@property (retain, nonatomic) NSData *invitation;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasPartnerIdentifier;
@property (retain, nonatomic) NSString *partnerIdentifier;
@property (readonly, nonatomic) char hasPairedReaderIdentifier;
@property (retain, nonatomic) NSString *pairedReaderIdentifier;
@property (readonly, nonatomic) char hasRecipientName;
@property (retain, nonatomic) NSString *recipientName;
@property (readonly, nonatomic) char hasSharingSessionIdentifier;
@property (retain, nonatomic) NSData *sharingSessionIdentifier;
@property (nonatomic) char hasEntitlement;
@property (nonatomic) unsigned int entitlement;
@property (nonatomic) char hasDeviceType;
@property (nonatomic) int deviceType;
@property (readonly, nonatomic) char hasIssuer;
@property (retain, nonatomic) NSString *issuer;
@property (readonly, nonatomic) char hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic) char hasSupportedRadioTechnologies;
@property (nonatomic) unsigned int supportedRadioTechnologies;
@property (readonly, nonatomic) char hasBrandIdentifier;
@property (retain, nonatomic) NSString *brandIdentifier;

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
- (int)StringAsDeviceType:(id)a0;
- (id)deviceTypeAsString:(int)a0;

@end
