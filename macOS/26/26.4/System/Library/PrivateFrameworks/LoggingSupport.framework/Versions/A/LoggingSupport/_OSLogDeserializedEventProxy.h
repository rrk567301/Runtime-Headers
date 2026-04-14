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

- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (id)category;
- (unsigned long long)traceIdentifier;
- (id)bootUUID;
- (unsigned long long)signpostScope;
- (id)senderImagePath;
- (unsigned long long)signpostIdentifier;
- (unsigned long long)parentActivityIdentifier;
- (unsigned long long)timeToLive;
- (id)backtrace;
- (unsigned long long)activityIdentifier;
- (unsigned long long)machContinuousTimestamp;
- (id)metricMetadata;
- (id)formatString;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (id)metricData;
- (id)processImagePath;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (unsigned long long)signpostType;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (void)_resetNeedsLookup;
- (unsigned long long)threadIdentifier;
- (const char *)senderImageUUIDBytes;
- (id)subsystem;
- (unsigned long long)senderImageOffset;
- (unsigned long long)creatorActivityIdentifier;
- (id)composedMessage;
- (id)metricDimensions;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (id)decomposedMessage;
- (id)processImageUUID;
- (id)signpostName;
- (id)process;
- (unsigned long long)logType;
- (id)timeZone;
- (int)processIdentifier;
- (void).cxx_destruct;
- (unsigned long long)type;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (id)date;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (id)senderImageUUID;
- (id)metricLabel;
- (id)sender;
- (const char *)processImageUUIDBytes;
- (unsigned long long)size;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (unsigned long long)transitionActivityIdentifier;
- (id)_frameForDict:(id)a0;

@end
