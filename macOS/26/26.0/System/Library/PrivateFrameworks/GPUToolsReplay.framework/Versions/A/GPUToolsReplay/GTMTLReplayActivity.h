@class NSString;

@interface GTMTLReplayActivity : NSObject <NSCopying> {
    NSString *_activityType;
    unsigned long long _activityStartTime;
}

@property (nonatomic) unsigned long long endTime;
@property (retain, nonatomic) GTMTLReplayActivity *previousActivity;

- (id)initWithType:(id)a0;
- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonObject;
- (void).cxx_destruct;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;
- (void)signpostIntervalBegin:(unsigned long long)a0;

@end
