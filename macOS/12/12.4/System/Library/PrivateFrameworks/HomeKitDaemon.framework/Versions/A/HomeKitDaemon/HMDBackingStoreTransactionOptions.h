@class NSString, NSDate;

@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) NSDate *committed;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL mustReplay;
@property (readonly, nonatomic) BOOL mustPush;
@property (readonly, nonatomic) BOOL mustSaveArchiveAtomically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)defaultXPCOptions;
+ (id)defaultLocalOptions;
+ (id)defaultPreferencesOptions;
+ (id)defaultCloudOptions;
+ (id)defaultOutOfSyncOptions;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 mustReplay:(BOOL)a2 mustPush:(BOOL)a3;
+ (id)defaultResidenceOptions;
+ (id)stringForHMDBackingStoreTransactionSource:(unsigned long long)a0;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 mustReplay:(BOOL)a2 mustPush:(BOOL)a3 mustSaveArchiveAtomically:(BOOL)a4;
+ (id)stringForHMDBackingStoreDestination:(unsigned long long)a0;
+ (id)cloudRequiresPushOptions;
+ (id)localPushBackOptions;
+ (id)defaultIDSOptions;
+ (id)defaultLegacyCloudOptions;
+ (id)defaultMetadataCloudOptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setLabel:(id)a0;
- (id)_description;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1;
- (id)logIdentifier;
- (id)debugString:(BOOL)a0;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(BOOL)a3 mustPush:(BOOL)a4 mustSaveArchiveAtomically:(BOOL)a5;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(BOOL)a3 mustPush:(BOOL)a4;

@end
