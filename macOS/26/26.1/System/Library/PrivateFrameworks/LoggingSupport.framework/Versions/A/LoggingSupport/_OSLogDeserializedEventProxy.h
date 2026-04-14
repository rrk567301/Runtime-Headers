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

- (id)signpostName;
- (unsigned long long)activityIdentifier;
- (id)bootUUID;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (unsigned long long)timeToLive;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (id)metricDimensions;
- (unsigned long long)signpostIdentifier;
- (unsigned long long)senderImageOffset;
- (unsigned long long)machContinuousTimestamp;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (unsigned long long)signpostType;
- (unsigned long long)traceIdentifier;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (unsigned long long)parentActivityIdentifier;
- (unsigned long long)logType;
- (unsigned long long)signpostScope;
- (id)formatString;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (id)sender;
- (id)decomposedMessage;
- (unsigned long long)threadIdentifier;
- (unsigned long long)type;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (const char *)processImageUUIDBytes;
- (id)date;
- (id)subsystem;
- (id)metricLabel;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (id)processImageUUID;
- (id)timeZone;
- (unsigned long long)size;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (id)category;
- (unsigned long long)creatorActivityIdentifier;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (int)processIdentifier;
- (id)metricMetadata;
- (id)process;
- (id)processImagePath;
- (void).cxx_destruct;
- (const char *)senderImageUUIDBytes;
- (id)metricData;
- (unsigned long long)transitionActivityIdentifier;
- (void)_resetNeedsLookup;
- (id)senderImageUUID;
- (id)senderImagePath;
- (id)backtrace;
- (id)composedMessage;
- (id)_frameForDict:(id)a0;
- (unsigned long long)lossEndMachContinuousTimestamp;

@end
