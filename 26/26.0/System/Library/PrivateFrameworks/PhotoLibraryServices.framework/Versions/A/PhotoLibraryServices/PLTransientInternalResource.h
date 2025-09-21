@class NSString, PLCloudMaster, NSDate, PLUniformTypeIdentifier;

@interface PLTransientInternalResource : PLManagedObject <PLCloudResource>

@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) unsigned long long cplType;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (retain, nonatomic) NSString *codecFourCharCodeName;
@property (nonatomic) long long dataLength;
@property (retain, nonatomic) NSString *fingerprint;
@property (retain, nonatomic) NSString *stableHash;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) PLCloudMaster *master;
@property (nonatomic) short trashedState;
@property (retain, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (readonly, nonatomic) BOOL isOriginalResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)insertResourceForCloudMaster:(id)a0 withExternalCloudResource:(id)a1;

- (unsigned long long)cplType;
- (void)applyTrashedState:(short)a0 trashedDate:(id)a1;
- (void)setCplType:(unsigned long long)a0;
- (void)setUniformTypeIdentifier:(id)a0;
- (id)validatedExternalResourceRepresentationUsingFileURL:(id)a0;
- (void)updateResourceWithExternalCPLResource:(id)a0;

@end
