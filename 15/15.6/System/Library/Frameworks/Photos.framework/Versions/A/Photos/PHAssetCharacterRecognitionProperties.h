@class NSData, NSDate;

@interface PHAssetCharacterRecognitionProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *characterRecognitionData;
@property (readonly, nonatomic) NSData *machineReadableCodeData;
@property (readonly, nonatomic) long long algorithmVersion;
@property (readonly, nonatomic) NSDate *adjustmentVersion;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
