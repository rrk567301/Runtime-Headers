@class NSString, PKProtobufNSDecimalNumber, PKProtobufCustomPrecisionAmount;

@interface PKProtobufPaymentApplication : PBCodable <NSCopying> {
    struct { unsigned char inAppPINRequiredAmount : 1; unsigned char inAppPriority : 1; unsigned char auxiliaryPaymentType : 1; unsigned char paymentNetworkIdentifier : 1; unsigned char paymentType : 1; unsigned char state : 1; unsigned char auxiliary : 1; unsigned char inAppPINRequired : 1; unsigned char supportsContactlessPayment : 1; unsigned char supportsInAppPayment : 1; unsigned char supportsInstantFundsIn : 1; unsigned char supportsMerchantTokens : 1; unsigned char supportsMultiTokensV2 : 1; } _has;
}

@property (readonly, nonatomic) char hasDpanIdentifier;
@property (retain, nonatomic) NSString *dpanIdentifier;
@property (readonly, nonatomic) char hasDpanSuffix;
@property (retain, nonatomic) NSString *dpanSuffix;
@property (readonly, nonatomic) char hasSanitizedDpan;
@property (retain, nonatomic) NSString *sanitizedDpan;
@property (readonly, nonatomic) char hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) char hasSecureElementIdenfitier;
@property (retain, nonatomic) NSString *secureElementIdenfitier;
@property (nonatomic) char hasState;
@property (nonatomic) unsigned int state;
@property (readonly, nonatomic) char hasSuspendedReason;
@property (retain, nonatomic) NSString *suspendedReason;
@property (nonatomic) char hasSupportsContactlessPayment;
@property (nonatomic) char supportsContactlessPayment;
@property (nonatomic) char hasSupportsInAppPayment;
@property (nonatomic) char supportsInAppPayment;
@property (nonatomic) char hasPaymentNetworkIdentifier;
@property (nonatomic) unsigned int paymentNetworkIdentifier;
@property (nonatomic) char hasInAppPINRequired;
@property (nonatomic) char inAppPINRequired;
@property (nonatomic) char hasInAppPINRequiredAmount;
@property (nonatomic) long long inAppPINRequiredAmount;
@property (readonly, nonatomic) char hasInAppPINRequiredCurrency;
@property (retain, nonatomic) NSString *inAppPINRequiredCurrency;
@property (nonatomic) char hasPaymentType;
@property (nonatomic) unsigned int paymentType;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) char hasAuxiliary;
@property (nonatomic) char auxiliary;
@property (nonatomic) char hasInAppPriority;
@property (nonatomic) long long inAppPriority;
@property (nonatomic) char hasAuxiliaryPaymentType;
@property (nonatomic) unsigned int auxiliaryPaymentType;
@property (readonly, nonatomic) char hasApanIdentifier;
@property (retain, nonatomic) NSString *apanIdentifier;
@property (readonly, nonatomic) char hasApanSuffix;
@property (retain, nonatomic) NSString *apanSuffix;
@property (nonatomic) char hasSupportsMerchantTokens;
@property (nonatomic) char supportsMerchantTokens;
@property (readonly, nonatomic) char hasCustomPrecisionInAppPINRequiredAmount;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionInAppPINRequiredAmount;
@property (readonly, nonatomic) char hasBalanceInAppPINRequiredAmount;
@property (retain, nonatomic) PKProtobufNSDecimalNumber *balanceInAppPINRequiredAmount;
@property (nonatomic) char hasSupportsMultiTokensV2;
@property (nonatomic) char supportsMultiTokensV2;
@property (nonatomic) char hasSupportsInstantFundsIn;
@property (nonatomic) char supportsInstantFundsIn;

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
