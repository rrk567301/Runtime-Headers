@class NSString, NSXPCConnection, NSURL, NSArray, NSObject, NSMutableArray;
@protocol OS_os_transaction;

@interface PTTraceConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *planNameOrPath;
@property (nonatomic) char overrideIncludeOSSignposts;
@property (nonatomic) char overrideIncludeOSLogs;
@property (nonatomic) char overrideSymbolicate;
@property (retain, nonatomic) NSString *traceRecordEndNotificationName;
@property (retain, nonatomic) NSObject<OS_os_transaction> *tracingActiveTransaction;
@property (nonatomic) char symbolicate;
@property (nonatomic) unsigned long long callstackSamplingRateMS;
@property (retain, nonatomic) NSMutableArray *traceGroups;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long traceType;
@property (retain, nonatomic) NSURL *traceDirectoryURL;
@property (retain, nonatomic) NSString *traceName;
@property (nonatomic) int ownerPID;
@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic) char compressWhenFinished;
@property (nonatomic) char includeOSLogs;
@property (nonatomic) char includeOSSignposts;
@property (nonatomic) unsigned long long traceTimeoutS;
@property (nonatomic) unsigned long long traceDurationSecs;
@property (nonatomic) char skipNotification;
@property (nonatomic) char useTraceRecord;
@property (nonatomic) char includeKernelStacks;
@property (nonatomic) unsigned long long kernelBufferSizeMB;
@property (nonatomic) unsigned int kernelBufferDrainQoS;
@property (nonatomic) unsigned long long kernelBufferDrainRateMS;
@property (nonatomic) char enableSwiftUITracing;
@property (retain, nonatomic) NSArray *traceRecordArgs;

+ (id)_defaultTraceRecordConfig;
+ (id)configWithDictionary:(id)a0;
+ (id)configWithTemplate:(unsigned long long)a0;
+ (id)configWithTracePlanName:(id)a0;
+ (id)configWithTracePlanURL:(id)a0;
+ (id)getCurrentConfig;
+ (char)resetConfig;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initConnection;
- (id)_getRemoteObjectProxy;
- (void)_invalidateSession;
- (char)storeConfig;
- (char)validateConfig;

@end
