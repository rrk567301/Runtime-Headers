@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (retain, nonatomic) NSMutableArray *chosenPaymentCredentialIdentifiers;

+ (Class)chosenPaymentCredentialIdentifiersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addChosenPaymentCredentialIdentifiers:(id)a0;
- (id)chosenPaymentCredentialIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)chosenPaymentCredentialIdentifiersCount;
- (void)clearChosenPaymentCredentialIdentifiers;

@end
