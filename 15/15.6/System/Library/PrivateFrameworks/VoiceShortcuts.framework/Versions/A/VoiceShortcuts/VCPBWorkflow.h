@class NSString, NSMutableArray, NSData;

@interface VCPBWorkflow : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char integerLastMigratedClientVersion : 1; unsigned char integerMinimumClientVersion : 1; unsigned char modificationDate : 1; unsigned char iconColor : 1; unsigned char iconGlyph : 1; unsigned char remoteQuarantineStatus : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasIconColor;
@property (nonatomic) unsigned int iconColor;
@property (nonatomic) char hasIconGlyph;
@property (nonatomic) unsigned int iconGlyph;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) char hasModificationDate;
@property (nonatomic) double modificationDate;
@property (retain, nonatomic) NSMutableArray *workflowTypes;
@property (retain, nonatomic) NSMutableArray *inputClasses;
@property (readonly, nonatomic) char hasActionsData;
@property (retain, nonatomic) NSData *actionsData;
@property (readonly, nonatomic) char hasImportQuestionsData;
@property (retain, nonatomic) NSData *importQuestionsData;
@property (nonatomic) char hasIntegerMinimumClientVersion;
@property (nonatomic) unsigned long long integerMinimumClientVersion;
@property (nonatomic) char hasIntegerLastMigratedClientVersion;
@property (nonatomic) unsigned long long integerLastMigratedClientVersion;
@property (readonly, nonatomic) char hasMinimumClientVersion;
@property (retain, nonatomic) NSString *minimumClientVersion;
@property (readonly, nonatomic) char hasLastMigratedClientVersion;
@property (retain, nonatomic) NSString *lastMigratedClientVersion;
@property (readonly, nonatomic) char hasAccessResourcePerWorkflowStateData;
@property (retain, nonatomic) NSData *accessResourcePerWorkflowStateData;
@property (nonatomic) char hasRemoteQuarantineStatus;
@property (nonatomic) int remoteQuarantineStatus;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;

+ (Class)inputClassesType;
+ (Class)workflowTypesType;

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
- (int)StringAsRemoteQuarantineStatus:(id)a0;
- (id)remoteQuarantineStatusAsString:(int)a0;
- (void)addInputClasses:(id)a0;
- (void)addWorkflowTypes:(id)a0;
- (void)clearInputClasses;
- (void)clearWorkflowTypes;
- (id)inputClassesAtIndex:(unsigned long long)a0;
- (unsigned long long)inputClassesCount;
- (id)workflowTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)workflowTypesCount;

@end
