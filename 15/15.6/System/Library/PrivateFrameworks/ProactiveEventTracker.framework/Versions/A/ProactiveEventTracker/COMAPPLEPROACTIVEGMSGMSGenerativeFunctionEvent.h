@class NSString;

@interface COMAPPLEPROACTIVEGMSGMSGenerativeFunctionEvent : PBCodable <NSCopying> {
    struct { unsigned char inferenceMillis : 1; unsigned char promptConstructionMillis : 1; unsigned char responseProcessingMillis : 1; unsigned char totalLatencyMillis : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (readonly, nonatomic) char hasFunctionIdentifier;
@property (retain, nonatomic) NSString *functionIdentifier;
@property (readonly, nonatomic) char hasInvocationIdentifier;
@property (retain, nonatomic) NSString *invocationIdentifier;
@property (nonatomic) char hasTotalLatencyMillis;
@property (nonatomic) double totalLatencyMillis;
@property (nonatomic) char hasPromptConstructionMillis;
@property (nonatomic) double promptConstructionMillis;
@property (nonatomic) char hasInferenceMillis;
@property (nonatomic) double inferenceMillis;
@property (nonatomic) char hasResponseProcessingMillis;
@property (nonatomic) double responseProcessingMillis;

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
