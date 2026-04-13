@interface ServerInformationComputerModelInfo : NSObject

+ (void)initialize;
+ (id)attributesForAllModelIdentifiers;
+ (id)marketingModelNameForAttributes:(id)a0;
+ (id)attributesForModelIdentifier:(id)a0;
+ (id)_hardwareImageNamed:(id)a0;
+ (id)_hardwareImageForModelIdentifier:(id)a0;
+ (id)_hardwareMonochromeImageForModelIdentifier:(id)a0;
+ (id)_hardwareMonochromeSelectedImageForModelIdentifier:(id)a0;
+ (id)allModelIdentifiers;
+ (id)attributesForAllMarketingModels;
+ (BOOL)shouldSkip:(id)a0;
+ (id)hardwareImageForModel:(id)a0;
+ (id)modelPropertiesForBoardIDs:(id)a0;

@end
