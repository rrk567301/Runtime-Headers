@interface aura_AggregateSubdevice : NSObject <NSCopying>

@property (nonatomic) struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } uid;
@property (nonatomic) struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } name;
@property (nonatomic) unsigned int extraInputLatency;
@property (nonatomic) unsigned int extraOutputLatency;
@property (nonatomic, getter=isDriftCorrectionEnabled) BOOL driftCorrectionEnabled;
@property (nonatomic) unsigned int driftCorrectionAlgorithm;
@property (nonatomic) unsigned int driftCorrectionQuality;
@property (nonatomic, getter=isLatencyCorrectionEnabled) BOOL latencyCorrectionEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
