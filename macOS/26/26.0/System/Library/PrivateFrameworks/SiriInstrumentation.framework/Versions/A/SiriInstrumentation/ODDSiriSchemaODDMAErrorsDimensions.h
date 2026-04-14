@class NSString, ODDSiriSchemaODDMANetworkAccessTypes, NSData;

@interface ODDSiriSchemaODDMAErrorsDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char IsMAAutoAsset : 1; unsigned char IsDiscretionary : 1; unsigned char IsUserPriority : 1; unsigned char operationType : 1; } _has;
}

@property (copy, nonatomic) NSString *AssetSpecifier;
@property (nonatomic) BOOL hasAssetSpecifier;
@property (copy, nonatomic) NSString *AssetType;
@property (nonatomic) BOOL hasAssetType;
@property (copy, nonatomic) NSString *AssetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (copy, nonatomic) NSString *Result;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) BOOL IsMAAutoAsset;
@property (nonatomic) BOOL hasIsMAAutoAsset;
@property (nonatomic) BOOL IsDiscretionary;
@property (nonatomic) BOOL hasIsDiscretionary;
@property (nonatomic) BOOL IsUserPriority;
@property (nonatomic) BOOL hasIsUserPriority;
@property (nonatomic) int operationType;
@property (nonatomic) BOOL hasOperationType;
@property (copy, nonatomic) NSString *operationFailureReason;
@property (nonatomic) BOOL hasOperationFailureReason;
@property (copy, nonatomic) NSString *operationResult;
@property (nonatomic) BOOL hasOperationResult;
@property (retain, nonatomic) ODDSiriSchemaODDMANetworkAccessTypes *networkAccessType;
@property (nonatomic) BOOL hasNetworkAccessType;
@property (copy, nonatomic) NSString *subSystemName;
@property (nonatomic) BOOL hasSubSystemName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAssetType;
- (void)deleteAssetSpecifier;
- (void)deleteAssetVersion;
- (void)deleteIsDiscretionary;
- (void)deleteIsMAAutoAsset;
- (void)deleteIsUserPriority;
- (void)deleteNetworkAccessType;
- (void)deleteOperationFailureReason;
- (void)deleteOperationResult;
- (void)deleteOperationType;
- (void)deleteResult;
- (void)deleteSubSystemName;

@end
