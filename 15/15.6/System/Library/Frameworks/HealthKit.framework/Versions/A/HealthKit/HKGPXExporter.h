@class HKWorkoutRoute, NSISO8601DateFormatter, NSURL, NSFileHandle;

@interface HKGPXExporter : NSObject {
    HKWorkoutRoute *_route;
    NSFileHandle *_fileHandle;
    NSISO8601DateFormatter *_isoFormatter;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) char isFinished;

+ (id)_displayNameForRoute:(id)a0;
+ (id)fileNameForRoute:(id)a0;

- (void).cxx_destruct;
- (char)finishWithError:(id *)a0;
- (char)_appendGPXHeaderWithError:(id *)a0;
- (char)_appendString:(id)a0 error:(id *)a1;
- (id)_trackpointEntryForLocation:(id)a0;
- (char)appendLocations:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 route:(id)a1;

@end
