@class NSString, NSNumber;

@interface EXSFolderProperties : EXSBaseProperties

@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char displayNameSpecified;
@property (retain, nonatomic) NSString *color;
@property (readonly, nonatomic) char colorSpecified;
@property (retain, nonatomic) NSNumber *order;
@property (readonly, nonatomic) char orderSpecified;
@property (nonatomic) long long distinguishedFolderType;
@property (readonly, nonatomic) char distinguishedFolderTypeSpecified;
@property (retain, nonatomic) NSString *movingToParentFolderID;
@property (readonly, nonatomic) char movingToParentFolderIDSpecified;
@property (retain, nonatomic) NSString *exclusiveExternalIDChange;
@property (readonly, nonatomic) char exclusiveExternalIDChangeSpecified;

+ (id)distinguishedFolderTypeToString:(long long)a0;
+ (id)itemPropertiesFromData:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)buildPropertiesDictionary;
- (id)dataFromProperties;
- (void)populateFromPropertiesDictionary:(id)a0;

@end
