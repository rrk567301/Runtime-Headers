@class NSString, NSArray;

@interface PhotosControlCommand : NSObject {
    NSString *_invokedName;
    NSArray *_args;
}

+ (id)name;
+ (id)usage;
+ (id)usagesummary;
+ (const char *)optstring;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)longopts;
+ (id)abbreviations;
+ (long long)minimumArgs;
+ (long long)maximumArgs;

- (id)description;
- (id)init;
- (int)run;
- (void).cxx_destruct;
- (id)formatDuration:(double)a0;
- (id)args;
- (id)initWithArgc:(int)a0 argv:(char **)a1;
- (BOOL)processOption:(int)a0 arg:(id)a1;
- (void)willProcessOptions;
- (BOOL)processArgc:(int)a0 argv:(char **)a1;
- (id)invokedName;
- (void)outputJsonObject:(id)a0;
- (void)outputCompactJsonObject:(id)a0;
- (void)output:(id)a0;
- (void)outputError:(id)a0;
- (void)outputErrorWithJsonOutput:(BOOL)a0 format:(id)a1;
- (void)output:(id)a0 arguments:(char *)a1;
- (void)outputError:(id)a0 arguments:(char *)a1;
- (id)dataForPathOrStdin:(id)a0;
- (BOOL)writeData:(id)a0 toPathOrStdout:(id)a1;

@end
