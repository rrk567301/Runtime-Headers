@class NSString;

@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) HMDBackingStoreTransactionOptions *defaultLocalOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultXPCOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultResidenceOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultCloudOptionsForInitialGraphLoad;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultCloudOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *cloudRequiresPushOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *localPushBackOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultIDSOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultLegacyCloudOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultMetadataCloudOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultPreferencesOptions;
@property (class, readonly) HMDBackingStoreTransactionOptions *defaultOutOfSyncOptions;
@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) char mustReplay;
@property (readonly, nonatomic) char mustPush;
@property (readonly, nonatomic) char mustSaveArchiveAtomically;
@property (readonly, nonatomic) unsigned long long cdTransactionAuthor;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)defaultXPCOptionsWithCDTransactionAuthor:(unsigned long long)a0 clientIdentifier:(id)a1;
+ (id)defaultXPCOptionsWithClientIdentifier:(id)a0;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(char)a3 mustPush:(char)a4 mustSaveArchiveAtomically:(char)a5;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(char)a3 mustPush:(char)a4 mustSaveArchiveAtomically:(char)a5 cdTransactionAuthor:(unsigned long long)a6 clientIdentifier:(id)a7;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 mustReplay:(char)a2 mustPush:(char)a3;
+ (id)optionsWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 mustReplay:(char)a2 mustPush:(char)a3 mustSaveArchiveAtomically:(char)a4;
+ (id)stringForHMDBackingStoreDestination:(unsigned long long)a0;
+ (id)stringForHMDBackingStoreTransactionSource:(unsigned long long)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_description;
- (id)debugString:(char)a0;
- (id)logIdentifier;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(char)a3 mustPush:(char)a4;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(char)a3 mustPush:(char)a4 mustSaveArchiveAtomically:(char)a5;
- (id)initWithSource:(unsigned long long)a0 destination:(unsigned long long)a1 label:(id)a2 mustReplay:(char)a3 mustPush:(char)a4 mustSaveArchiveAtomically:(char)a5 cdTransactionAuthor:(unsigned long long)a6 clientIdentifier:(id)a7;

@end
