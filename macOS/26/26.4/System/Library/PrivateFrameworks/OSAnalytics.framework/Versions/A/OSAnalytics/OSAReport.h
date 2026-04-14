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
+ (BOOL)isInLDM;
+ (BOOL)isDeveloperMode;
+ (id)bootProgressRegister;
+ (unsigned int)codeSigningMonitor;
+ (unsigned char)executeWithTimeout:(unsigned int)a0 Code:(id /* block */)a1;
+ (id)findBundleAtPath:(id)a0 withKeys:(id)a1 bundleURL:(inout id *)a2;
+ (BOOL)isSecurityResearchDeviceERM;
+ (id)kernelVersionDescription;
+ (id)reduceToTwoSigFigures:(unsigned long long)a0;
+ (id)systemIDWithDescription:(BOOL)a0;

- (BOOL)isAppleTV;
- (id)reportNamePrefix;
- (id)appleCareDetails;
- (BOOL)saveWithOptions:(id)a0;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isActionable;
- (id)getSyslogForPids:(id)a0 andOptionalSenders:(id)a1 additionalPredicates:(id)a2;
- (id)init;
- (id)problemType;
- (id)incidentID;
- (id)additionalIPSMetadata;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (double)captureTime;
- (void)symlink:(id)a0;

@end
