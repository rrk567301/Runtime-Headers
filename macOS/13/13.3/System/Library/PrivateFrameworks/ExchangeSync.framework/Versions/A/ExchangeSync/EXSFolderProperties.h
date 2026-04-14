@class NSString, NSNumber;

@interface EXSFolderProperties : EXSBaseProperties

@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL displayNameSpecified;
@property (retain, nonatomic) NSString *color;
@property (readonly, nonatomic) BOOL colorSpecified;
@property (retain, nonatomic) NSNumber *order;
@property (readonly, nonatomic) BOOL orderSpecified;
@property (nonatomic) long long distinguishedFolderType;
@property (readonly, nonatomic) BOOL distinguishedFolderTypeSpecified;

+ (id)distinguishedFolderTypeToString:(long long)a0;
+ (id)itemPropertiesFromData:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)buildPropertiesDictionary;
- (id)dataFromProperties;
- (void)populateFromPropertiesDictionary:(id)a0;

@end
