@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)forwardingTargetForSelector:(SEL)a0;
- (double)doubleValue;
- (id)stringValue;
- (long long)integerValue;
- (BOOL)boolValue;
- (void).cxx_destruct;
- (id)uuid;
- (id)timeZone;
- (long long)secondsFromGMT;
- (id)source;
- (id)UUID;
- (id)value;
- (id)startDate;
- (id)stream;
- (double)confidence;
- (id)endDate;
- (id)creationDate;
- (id)streamName;
- (id)localCreationDate;
- (id)uuidHash;
- (long long)endDayOfWeek;
- (long long)endSecondOfDay;
- (long long)startDayOfWeek;
- (long long)startSecondOfDay;
- (double)valueDouble;
- (long long)valueInteger;
- (id)valueString;
- (short)valueClass;
- (long long)valueTypeCode;
- (long long)compatibilityVersion;
- (id)customMetadata;
- (id)structuredMetadata;
- (id)metadata;

@end
