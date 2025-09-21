@class NSArray, NSDictionary, NSString, AMType;

@interface AMInputOutputWorkflowMetadata : AMWorkflowMetaData

@property (class, readonly, nonatomic) NSDictionary *_legacyServiceKeyMapping;

@property (copy) NSDictionary *applicationBundleIDsByPath;
@property (copy) NSArray *applicationPaths;
@property (readonly, nonatomic) NSArray *orderedApplicationBundleIDs;
@property (readonly, copy, nonatomic) NSString *inputTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *outputTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *inputOptionTitle;
@property (readonly, nonatomic) char inputTypeUnknown;
@property (readonly, nonatomic) char hasNoInput;
@property (readonly, nonatomic) char canReplaceSelectedText;
@property (nonatomic) char replacesSelectedText;
@property (readonly, nonatomic) char canSelectInputOption;
@property (nonatomic) char processesInput;
@property (nonatomic) char useAutomaticInputType;
@property (retain, nonatomic) AMType *inputType;
@property (retain, nonatomic) AMType *outputType;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;
- (id)metaData;
- (id)initWithPersonality:(id)a0;
- (id)headerInputType;
- (void)setFromDictionary:(id)a0;

@end
