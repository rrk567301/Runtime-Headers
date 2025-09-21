@class NSString, PKProtobufNSDecimalNumber, NSData, NSMutableArray, PKProtobufCustomPrecisionAmount;

@interface PKProtobufPaymentInstrument : PBCodable <NSCopying> {
    struct { unsigned char ingestedDate : 1; unsigned char peerPaymentAccountBalance : 1; unsigned char associatedAccountFeatureIdentifier : 1; unsigned char peerPaymentAccountState : 1; unsigned char cobranded : 1; unsigned char hasAssociatedPeerPaymentAccount : 1; unsigned char supportsAutomaticSelection : 1; } _has;
}

@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *paymentApplications;
@property (nonatomic) char hasIngestedDate;
@property (nonatomic) double ingestedDate;
@property (readonly, nonatomic) char hasPrimaryAccountNumberSuffix;
@property (retain, nonatomic) NSString *primaryAccountNumberSuffix;
@property (readonly, nonatomic) char hasManifestHash;
@property (retain, nonatomic) NSData *manifestHash;
@property (readonly, nonatomic) char hasPrimaryAccountIdentifier;
@property (retain, nonatomic) NSString *primaryAccountIdentifier;
@property (retain, nonatomic) NSMutableArray *associatedWebDomains;
@property (nonatomic) char hasSupportsAutomaticSelection;
@property (nonatomic) char supportsAutomaticSelection;
@property (readonly, nonatomic) char hasIssuerCountryCode;
@property (retain, nonatomic) NSString *issuerCountryCode;
@property (nonatomic) char hasHasAssociatedPeerPaymentAccount;
@property (nonatomic) char hasAssociatedPeerPaymentAccount;
@property (readonly, nonatomic) char hasPeerPaymentAccountCurrency;
@property (retain, nonatomic) NSString *peerPaymentAccountCurrency;
@property (nonatomic) char hasPeerPaymentAccountBalance;
@property (nonatomic) long long peerPaymentAccountBalance;
@property (nonatomic) char hasPeerPaymentAccountState;
@property (nonatomic) unsigned int peerPaymentAccountState;
@property (readonly, nonatomic) char hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) char hasCustomPrecisionPeerPaymentAccountBalance;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionPeerPaymentAccountBalance;
@property (readonly, nonatomic) char hasDecimalAccountBalance;
@property (retain, nonatomic) PKProtobufNSDecimalNumber *decimalAccountBalance;
@property (nonatomic) char hasAssociatedAccountFeatureIdentifier;
@property (nonatomic) unsigned int associatedAccountFeatureIdentifier;
@property (nonatomic) char hasCobranded;
@property (nonatomic) char cobranded;
@property (readonly, nonatomic) char hasCobrandName;
@property (retain, nonatomic) NSString *cobrandName;

+ (Class)associatedWebDomainsType;
+ (Class)paymentApplicationsType;

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
- (void)addAssociatedWebDomains:(id)a0;
- (void)addPaymentApplications:(id)a0;
- (id)associatedWebDomainsAtIndex:(unsigned long long)a0;
- (unsigned long long)associatedWebDomainsCount;
- (void)clearAssociatedWebDomains;
- (void)clearPaymentApplications;
- (id)paymentApplicationsAtIndex:(unsigned long long)a0;
- (unsigned long long)paymentApplicationsCount;

@end
