@class PAImageConversionServiceClient, NSProgress, PAVideoConversionServiceClient, NSMutableArray;

@interface MediaConversionServiceCommandLineDriver : NSObject

@property (retain) NSMutableArray *conversionOptionSets;
@property (retain) NSProgress *conversionProgress;
@property char verbose;
@property char showProgress;
@property char replaceExistingOutput;
@property char waitForSignalAfterCompletion;
@property char pauseAtStart;
@property char launchServiceAtStart;
@property char pauseAfterLaunchingService;
@property (retain) PAImageConversionServiceClient *imageConversionServiceClient;
@property (retain) PAVideoConversionServiceClient *videoConversionServiceClient;

+ (id)usage;
+ (void)output:(id)a0;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)longopts;
+ (const char *)optstring;
+ (void)outputError:(id)a0;
+ (id)usagesummary;
+ (void)outputConversionError:(id)a0 status:(long long)a1;
+ (char)outputJSONDataForConversionOutputInformation:(id)a0;
+ (id)replacementObjectForObject:(id)a0 valueConversionHandler:(id /* block */)a1;

- (id)init;
- (int)run;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)processOption:(int)a0 arg:(id)a1;
- (char)hasConversionOfType:(id)a0;
- (int)runImageConversionWithConversionOptionSet:(id)a0;
- (int)runVideoConversionWithConversionOptionSet:(id)a0;
- (int)runVideoStillExtractionConversionWithConversionOptionSet:(id)a0;
- (void)sendMessageToLaunchService;
- (int)validateAndProcessArgumentValues;
- (void)waitForSigInt;

@end
