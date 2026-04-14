@class NSString, NSMutableArray, NSMutableDictionary;

@interface OSAReport : NSObject {
    NSString *_incidentID;
    NSString *_logType;
    NSMutableDictionary *_logWritingOptions;
}

@property (readonly, nonatomic) double capture_time;
@property (readonly, nonatomic) NSMutableArray *notes;
@property (readonly, nonatomic) NSString *logfile;
@property (retain, nonatomic) NSString *etlKey;

+ (id)bootArgs;
+ (unsigned char)executeWithTimeout:(unsigned int)a0 Code:(id /* block */)a1;
+ (id)systemIDWithDescription:(BOOL)a0;
+ (id)kernelVersionDescription;
+ (id)findBundleAtPath:(id)a0 withKeys:(id)a1 bundleURL:(inout id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)problemType;
- (BOOL)isAppleTV;
- (BOOL)isActionable;
- (id)incidentID;
- (BOOL)saveWithOptions:(id)a0;
- (id)appleCareDetails;
- (id)reportNamePrefix;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)additionalIPSMetadata;
- (id)getSyslogForPids:(id)a0 andOptionalSenders:(id)a1;
- (double)captureTime;
- (void)symlink:(id)a0;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;

@end
