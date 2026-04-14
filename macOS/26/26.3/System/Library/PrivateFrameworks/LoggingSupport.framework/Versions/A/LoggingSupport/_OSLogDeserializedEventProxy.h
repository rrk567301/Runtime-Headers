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

- (id)backtrace;
- (unsigned long long)activityIdentifier;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (id)metricData;
- (unsigned long long)logType;
- (const char *)senderImageUUIDBytes;
- (id)bootUUID;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (unsigned long long)creatorActivityIdentifier;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (id)decomposedMessage;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (id)senderImageUUID;
- (id)processImageUUID;
- (unsigned long long)signpostIdentifier;
- (id)metricMetadata;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (unsigned long long)timeToLive;
- (unsigned long long)traceIdentifier;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (id)metricLabel;
- (id)sender;
- (id)formatString;
- (id)subsystem;
- (unsigned long long)machContinuousTimestamp;
- (unsigned long long)type;
- (id)signpostName;
- (id)date;
- (void)_resetNeedsLookup;
- (unsigned long long)signpostType;
- (id)composedMessage;
- (int)processIdentifier;
- (id)processImagePath;
- (unsigned long long)transitionActivityIdentifier;
- (unsigned long long)senderImageOffset;
- (unsigned long long)size;
- (unsigned long long)threadIdentifier;
- (id)category;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (const char *)processImageUUIDBytes;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (id)timeZone;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (void).cxx_destruct;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (unsigned long long)signpostScope;
- (unsigned long long)parentActivityIdentifier;
- (id)senderImagePath;
- (id)process;
- (id)metricDimensions;
- (id)_frameForDict:(id)a0;

@end
