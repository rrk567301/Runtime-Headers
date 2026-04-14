@class NSString, NSArray, NSURL, NSMutableArray, EDRParser;

@interface EDRManager : NSObject

@property (retain, nonatomic) NSMutableArray *resources;
@property (retain, nonatomic) EDRParser *injectedResource;
@property (copy, nonatomic) NSString *selectedResourceName;
@property (copy, nonatomic) NSArray *technologyStrings;
@property (copy, nonatomic) NSArray *i1D3Mapping;
@property (copy, nonatomic) NSString *resourceExtension;
@property (retain, nonatomic) NSURL *overrideDirectory;
@property (copy, nonatomic) NSString *defaultResourceName;
@property (copy, nonatomic) id /* block */ onResourceSelectionChanged;

+ (id)findMappingEntryWithKey:(id)a0 withValue:(id)a1 forArray:(id)a2;

- (id)selected;
- (void).cxx_destruct;
- (id)currentParser;
- (id)currentResource;
- (void)validateResources;
- (id)findTechnologyNameFromFilename:(id)a0;
- (id)allParsedResources;
- (id)calibrationsDirectory;
- (id)initWithResourceExtension:(id)a0 defaultResourceName:(id)a1;
- (void)loadAllResources;
- (id)parseMappingWithFile:(id)a0;
- (void)parseResourceData:(id)a0 named:(id)a1;
- (id)resourceForName:(id)a0;
- (void)selectResourceNamed:(id)a0;
- (void)useTemporaryResourceWithData:(id)a0 named:(id)a1;

@end
