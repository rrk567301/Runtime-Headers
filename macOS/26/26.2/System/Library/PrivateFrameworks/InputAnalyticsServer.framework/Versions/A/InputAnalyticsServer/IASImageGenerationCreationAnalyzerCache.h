@class NSString, NSDictionary, NSDate, NSMutableArray, NSNumber;

@interface IASImageGenerationCreationAnalyzerCache : NSObject

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) unsigned long long generationStatus;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *recipeID;
@property (copy, nonatomic) NSString *feature;
@property (copy, nonatomic) NSDictionary *featureModel;
@property (nonatomic) unsigned long long personalizationType;
@property (nonatomic) unsigned long long montaraHandoff;
@property (nonatomic) unsigned long long numDrawingIngredients;
@property (nonatomic) unsigned long long numEffectIngredients;
@property (nonatomic) unsigned long long numEmojiIngredients;
@property (nonatomic) unsigned long long numGenericPersonIngredients;
@property (nonatomic) unsigned long long numGenmojiIngredients;
@property (nonatomic) unsigned long long numInitialEmojisCombined;
@property (nonatomic) unsigned long long numImageIngredients;
@property (nonatomic) unsigned long long numTextIngredients;
@property (nonatomic) unsigned long long numTotalIngredients;
@property (retain, nonatomic) NSMutableArray *ingredients;
@property (retain, nonatomic) NSDate *totalCreationModelStartTime;
@property (nonatomic) double totalCreationModelRuntime;
@property (nonatomic) unsigned long long currentPromptIndex;
@property (nonatomic) unsigned long long currentImageIndex;
@property (retain, nonatomic) NSMutableArray *imageDetails;
@property (copy, nonatomic) NSString *hairModifier;
@property (copy, nonatomic) NSString *faceModifier;
@property (copy, nonatomic) NSString *accessoriesModifier;
@property (copy, nonatomic) NSString *additionalDescriptionModifier;
@property (nonatomic) unsigned long long entryPoint;
@property (copy, nonatomic) NSString *blockingInputOutputCategory;
@property (copy, nonatomic) NSString *blockingSubcategory;
@property (copy, nonatomic) NSNumber *isExternalProvider;
@property (copy, nonatomic) NSDate *lastCreationStartedSignalTimestamp;

- (void).cxx_destruct;
- (id)init;

@end
