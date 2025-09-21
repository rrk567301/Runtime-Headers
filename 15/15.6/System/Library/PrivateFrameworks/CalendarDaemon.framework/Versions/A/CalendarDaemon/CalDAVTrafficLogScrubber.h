@class NSURL, NSMutableArray;
@protocol CADDiagnosticLogContext;

@interface CalDAVTrafficLogScrubber : NSObject {
    NSMutableArray *_urlsToCleanUp;
}

@property (class, nonatomic) char sortICSDocuments;

@property (retain, nonatomic) NSURL *inputURL;
@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) id<CADDiagnosticLogContext> context;

+ (id)log;
+ (char)redactLog:(id)a0 toOutputFile:(id)a1 context:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)cleanUp;
- (void)compressFileAt:(id)a0 to:(id)a1;
- (id)decompressedInputFile;
- (char)scrub;
- (id)temporaryUncompressedFile;

@end
