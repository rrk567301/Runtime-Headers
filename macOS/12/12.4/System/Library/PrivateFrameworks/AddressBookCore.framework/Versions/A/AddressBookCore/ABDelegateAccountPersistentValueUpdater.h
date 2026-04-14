@class NSString, NSDictionary, NSRegularExpression;

@interface ABDelegateAccountPersistentValueUpdater : NSObject

@property (readonly, copy, nonatomic) NSString *dsid;
@property (readonly, copy, nonatomic) NSDictionary *homeInfo;
@property (readonly, copy, nonatomic) NSRegularExpression *regex;

+ (id)allowedKeys;
+ (id)delegateValuesToUpdateFromCombinedDictionary:(id)a0 existingDelegateValues:(id)a1;
+ (id)homeInfoKeysToCopyFromParent;
+ (id)bootstrappedNewHomeInfoGeneratedUsingCombinedDictionary:(id)a0;
+ (void)absorbHomeInfoValuesFromCombinedHomeInfoDictionary:(id)a0 intoHomeInfoDictionary:(id)a1;
+ (id)allowedHomeInfoKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDSID:(id)a0 homeInfo:(id)a1;
- (id)combinedDictionaryWithDelegateValuesAndValuesInParentDictionary:(id)a0;
- (void)prepareRegex;
- (id)startByFilteringOutDisallowedDataFromParentDictionary:(id)a0;
- (void)updateServerRootPathInDictionary:(id)a0;
- (void)setAllowedHomeInfoDataInDictionary:(id)a0 givenParentHomeInfo:(id)a1;
- (void)updateDictionary:(id)a0 byReplacingDSIDInValueForKey:(id)a1;
- (id)stringByReplacingDSIDInString:(id)a0;
- (void)updateDictionary:(id)a0 withReconstructedDelegatePath:(id)a1 reconstructedDelegateInfo:(id)a2;

@end
