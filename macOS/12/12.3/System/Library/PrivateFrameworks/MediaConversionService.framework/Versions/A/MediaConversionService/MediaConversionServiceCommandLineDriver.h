@class PAImageConversionServiceClient, NSProgress, PAVideoConversionServiceClient, NSMutableArray;

@interface MediaConversionServiceCommandLineDriver : NSObject

@property (retain) NSMutableArray *conversionOptionSets;
@property (retain) NSProgress *conversionProgress;
@property BOOL verbose;
@property BOOL showProgress;
@property BOOL replaceExistingOutput;
@property BOOL waitForSignalAfterCompletion;
@property BOOL pauseAtStart;
@property BOOL launchServiceAtStart;
@property BOOL pauseAfterLaunchingService;
@property (retain) PAImageConversionServiceClient *imageConversionServiceClient;
@property (retain) PAVideoConversionServiceClient *videoConversionServiceClient;

+ (id)usage;
+ (void)outputError:(id)a0;
+ (void)output:(id)a0;
+ (id)usagesummary;
+ (const char *)optstring;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)longopts;
+ (BOOL)outputJSONDataForConversionOutputInformation:(id)a0;
+ (void)outputConversionError:(id)a0 status:(long long)a1;
+ (id)replacementObjectForObject:(id)a0 valueConversionHandler:(id /* block */)a1;

- (int)run;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)processOption:(int)a0 arg:(id)a1;
- (int)validateAndProcessArgumentValues;
- (void)sendMessageToLaunchService;
- (int)runImageConversionWithConversionOptionSet:(id)a0;
- (int)runVideoConversionWithConversionOptionSet:(id)a0;
- (int)runVideoStillExtractionConversionWithConversionOptionSet:(id)a0;
- (void)waitForSigInt;
- (BOOL)hasConversionOfType:(id)a0;

@end
