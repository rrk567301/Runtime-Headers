@class _OSLogEventSerializationMetadata, NSDictionary;

@interface _OSLogDeserializedEventProxy : OSLogEventProxy {
    BOOL _unixDateNeedsLookup;
    BOOL _unixTimeZoneNeedsLookup;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _unixTimeZone;
    struct timeval { long long tv_sec; int tv_usec; } _unixDate;
    BOOL _lossStartUnixDateNeedsLookup;
    BOOL _lossStartUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossStartUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossStartUnixTimeZone;
    BOOL _lossEndUnixDateNeedsLookup;
    BOOL _lossEndUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossEndUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossEndUnixTimeZone;
    unsigned long long _type;
}

@property (retain, nonatomic) _OSLogEventSerializationMetadata *metadata;
@property (retain, nonatomic) NSDictionary *curEventDictionary;
@property (nonatomic) BOOL needsTypeLookup;

- (unsigned long long)creatorActivityIdentifier;
- (unsigned long long)logType;
- (id)senderImagePath;
- (id)formatString;
- (unsigned long long)signpostType;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (unsigned long long)threadIdentifier;
- (id)composedMessage;
- (id)senderImageUUID;
- (id)backtrace;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (id)bootUUID;
- (unsigned long long)senderImageOffset;
- (id)processImagePath;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (id)metricData;
- (const char *)processImageUUIDBytes;
- (id)metricMetadata;
- (id)decomposedMessage;
- (unsigned long long)signpostScope;
- (id)metricLabel;
- (unsigned long long)transitionActivityIdentifier;
- (unsigned long long)parentActivityIdentifier;
- (unsigned long long)timeToLive;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (unsigned long long)activityIdentifier;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (id)processImageUUID;
- (unsigned long long)signpostIdentifier;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (unsigned long long)machContinuousTimestamp;
- (unsigned long long)traceIdentifier;
- (id)metricDimensions;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (id)sender;
- (id)category;
- (id)date;
- (id)timeZone;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (unsigned long long)type;
- (int)processIdentifier;
- (id)_frameForDict:(id)a0;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (const char *)senderImageUUIDBytes;
- (id)signpostName;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (id)process;
- (void)_resetNeedsLookup;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (id)subsystem;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (unsigned long long)size;
- (void).cxx_destruct;

@end
