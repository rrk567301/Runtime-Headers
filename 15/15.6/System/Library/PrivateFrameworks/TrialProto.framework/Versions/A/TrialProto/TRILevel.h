@class NSString, TRIMobileAssetReference, NSData, NSMutableDictionary, TRIFile;

@interface TRILevel : TRIPBMessage

@property (readonly, nonatomic) int levelOneOfCase;
@property (nonatomic) char booleanValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) int intValue;
@property (nonatomic) long long longValue;
@property (nonatomic) float floatValue;
@property (nonatomic) double doubleValue;
@property (copy, nonatomic) NSData *binaryValue;
@property (retain, nonatomic) TRIFile *fileValue;
@property (retain, nonatomic) TRIFile *directoryValue;
@property (retain, nonatomic) TRIMobileAssetReference *mobileAssetReferenceValue;
@property (retain, nonatomic) NSMutableDictionary *metadata;
@property (readonly, nonatomic) unsigned long long metadata_Count;

+ (id)descriptor;

- (id)object;
- (id)fileOrDirectoryLevelWithIsDir:(char *)a0;
- (char)isFactorOnDemand;

@end
