@class NSString, NSMutableArray, NSMutableDictionary;

@interface ConversionOptionSet : NSObject

@property (retain) NSString *conversionType;
@property (retain) NSString *sourcePath;
@property (retain) NSString *sourcePathVideoComplement;
@property (retain) NSString *destinationPath;
@property (retain) NSString *destinationPathVideoComplement;
@property (retain) NSMutableArray *conversionOptionInputKeyValuePairs;
@property (retain) NSString *presetName;
@property long long repeatCount;
@property (retain) NSMutableDictionary *conversionOptions;
@property BOOL replaceExistingOutput;
@property BOOL verbose;

+ (id)knownConversionTypes;
+ (struct CGSize { double x0; double x1; })sizeForImageAtPath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)presetNameToOptionsMappingForVideoTranscoding;
- (id)presetNameToOptionsMappingForImageConversionOrVideoStillImageExtraction;
- (id)presetListForMapping:(id)a0;
- (int)checkDestinationExists;
- (BOOL)processConversionOptionKey:(id)a0 valueString:(id)a1;
- (double)scaleFactorForInputSize:(struct CGSize { double x0; double x1; })a0 sharedStreamsSizeSpecificationString:(id)a1;
- (id)conversionOptionValueForString:(id)a0 valueType:(unsigned long long)a1;
- (id)metadataPolicyForString:(id)a0;
- (id)cmTimeRangeDictionaryForString:(id)a0;
- (id)photosAdjustmentsDictionaryForString:(id)a0;
- (id)arrayOfStringsForString:(id)a0;
- (int)validateAndProcess;

@end
