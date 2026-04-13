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

- (unsigned long long)size;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)date;
- (id)timeZone;
- (int)processIdentifier;
- (id)category;
- (id)sender;
- (unsigned long long)timeToLive;
- (id)process;
- (unsigned long long)threadIdentifier;
- (unsigned long long)activityIdentifier;
- (unsigned long long)signpostType;
- (id)subsystem;
- (id)formatString;
- (id)backtrace;
- (id)composedMessage;
- (unsigned long long)logType;
- (unsigned long long)traceIdentifier;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (unsigned long long)parentActivityIdentifier;
- (unsigned long long)transitionActivityIdentifier;
- (id)bootUUID;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (unsigned long long)machContinuousTimestamp;
- (id)processImageUUID;
- (const char *)processImageUUIDBytes;
- (id)processImagePath;
- (id)senderImageUUID;
- (const char *)senderImageUUIDBytes;
- (id)senderImagePath;
- (unsigned long long)senderImageOffset;
- (id)decomposedMessage;
- (unsigned long long)signpostIdentifier;
- (unsigned long long)signpostScope;
- (id)signpostName;
- (unsigned long long)creatorActivityIdentifier;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (void)_resetNeedsLookup;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (id)_frameForDict:(id)a0;

@end
