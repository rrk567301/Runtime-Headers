@class NSString;

@interface COMAPPLEPROACTIVEGMSGMSGenerativeFunctionEvent : PBCodable <NSCopying> {
    struct { unsigned char inferenceMillis : 1; unsigned char promptConstructionMillis : 1; unsigned char responseProcessingMillis : 1; unsigned char totalLatencyMillis : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (readonly, nonatomic) BOOL hasFunctionIdentifier;
@property (retain, nonatomic) NSString *functionIdentifier;
@property (readonly, nonatomic) BOOL hasInvocationIdentifier;
@property (retain, nonatomic) NSString *invocationIdentifier;
@property (nonatomic) BOOL hasTotalLatencyMillis;
@property (nonatomic) double totalLatencyMillis;
@property (nonatomic) BOOL hasPromptConstructionMillis;
@property (nonatomic) double promptConstructionMillis;
@property (nonatomic) BOOL hasInferenceMillis;
@property (nonatomic) double inferenceMillis;
@property (nonatomic) BOOL hasResponseProcessingMillis;
@property (nonatomic) double responseProcessingMillis;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
