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
@property (readonly) NSString *oldLogFile;

+ (id)bootArgs;
+ (id)bootSessionUUID;
+ (BOOL)isDeveloperMode;
+ (BOOL)isInLDM;
+ (id)bootProgressRegister;
+ (unsigned int)codeSigningMonitor;
+ (unsigned char)executeWithTimeout:(unsigned int)a0 Code:(id /* block */)a1;
+ (id)findBundleAtPath:(id)a0 withKeys:(id)a1 bundleURL:(inout id *)a2;
+ (BOOL)isSecurityResearchDeviceERM;
+ (id)kernelVersionDescription;
+ (id)reduceToTwoSigFigures:(unsigned long long)a0;
+ (id)systemIDWithDescription:(BOOL)a0;

- (BOOL)isAppleTV;
- (id)getSyslogForPids:(id)a0 andOptionalSenders:(id)a1 additionalPredicates:(id)a2;
- (id)additionalIPSMetadata;
- (id)incidentID;
- (id)reportNamePrefix;
- (id)problemType;
- (BOOL)isActionable;
- (void).cxx_destruct;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)symlink:(id)a0;
- (double)captureTime;
- (id)appleCareDetails;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)init;
- (BOOL)saveWithOptions:(id)a0;

@end
