@class NSString, DRSProtoTaskingConfigMetadata;

@interface DRSProtoTaskingConfigCompletion : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    struct { unsigned char activeDuration : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasTaskingConfigMetadata;
@property (retain, nonatomic) DRSProtoTaskingConfigMetadata *taskingConfigMetadata;
@property (readonly, nonatomic) char hasCompletionType;
@property (retain, nonatomic) NSString *completionType;
@property (readonly, nonatomic) char hasCompletionDescription;
@property (retain, nonatomic) NSString *completionDescription;
@property (nonatomic) char hasActiveDuration;
@property (nonatomic) float activeDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
