@class NSString, NSArray;

@interface BMSensitiveContentAnalysisUIInteraction : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int ageGroup;
@property (readonly, nonatomic) int eventDirection;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) int contentType;
@property (nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *trackingVersion;
@property (readonly, nonatomic) int harms;
@property (nonatomic) BOOL hasHarms;
@property (readonly, nonatomic) int subContentType;
@property (readonly, nonatomic) int options;
@property (nonatomic) BOOL hasOptions;
@property (readonly, nonatomic) int currentStep;
@property (readonly, nonatomic) int previousStep;
@property (readonly, nonatomic) NSArray *path;
@property (readonly, nonatomic) NSString *region;
@property (readonly, nonatomic) BOOL userOptedToShow;
@property (nonatomic) BOOL hasUserOptedToShow;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)_pathJSONArray;
- (id)initWithAgeGroup:(int)a0 eventDirection:(int)a1 action:(int)a2 contentType:(int)a3 clientBundleID:(id)a4 trackingVersion:(id)a5;
- (id)initWithAgeGroup:(int)a0 eventDirection:(int)a1 action:(int)a2 contentType:(id)a3 clientBundleID:(id)a4 trackingVersion:(id)a5 harms:(id)a6 subContentType:(int)a7 options:(id)a8 currentStep:(int)a9 previousStep:(int)a10 path:(id)a11 region:(id)a12 userOptedToShow:(id)a13;

@end
