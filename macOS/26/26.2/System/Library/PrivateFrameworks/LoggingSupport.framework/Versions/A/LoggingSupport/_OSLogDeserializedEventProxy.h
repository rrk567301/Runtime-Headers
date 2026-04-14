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

- (unsigned long long)signpostType;
- (id)backtrace;
- (unsigned long long)activityIdentifier;
- (id)decomposedMessage;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (id)bootUUID;
- (unsigned long long)signpostScope;
- (id)formatString;
- (const char *)senderImageUUIDBytes;
- (id)composedMessage;
- (unsigned long long)logType;
- (unsigned long long)timeToLive;
- (id)metricMetadata;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (id)processImagePath;
- (id)metricLabel;
- (unsigned long long)traceIdentifier;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (id)date;
- (unsigned long long)transitionActivityIdentifier;
- (id)process;
- (id)senderImageUUID;
- (id)category;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (id)subsystem;
- (int)processIdentifier;
- (unsigned long long)parentActivityIdentifier;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (unsigned long long)signpostIdentifier;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (id)metricDimensions;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (unsigned long long)senderImageOffset;
- (id)metricData;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)machContinuousTimestamp;
- (void)_resetNeedsLookup;
- (unsigned long long)threadIdentifier;
- (unsigned long long)creatorActivityIdentifier;
- (id)processImageUUID;
- (id)sender;
- (id)senderImagePath;
- (unsigned long long)size;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (id)timeZone;
- (id)signpostName;
- (const char *)processImageUUIDBytes;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (id)_frameForDict:(id)a0;

@end
