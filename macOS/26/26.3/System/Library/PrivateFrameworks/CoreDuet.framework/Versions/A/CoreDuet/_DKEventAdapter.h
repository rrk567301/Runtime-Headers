@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (short)valueClass;
- (long long)secondsFromGMT;
- (id)stream;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)valueString;
- (id)streamName;
- (double)confidence;
- (long long)compatibilityVersion;
- (id)endDate;
- (long long)endDayOfWeek;
- (id)uuidHash;
- (id)startDate;
- (long long)startDayOfWeek;
- (double)valueDouble;
- (id)UUID;
- (long long)valueInteger;
- (long long)integerValue;
- (double)doubleValue;
- (id)source;
- (id)structuredMetadata;
- (BOOL)boolValue;
- (id)localCreationDate;
- (long long)endSecondOfDay;
- (id)timeZone;
- (id)uuid;
- (id)metadata;
- (void).cxx_destruct;
- (id)customMetadata;
- (long long)startSecondOfDay;
- (long long)valueTypeCode;
- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (unsigned long long)hash;
- (id)creationDate;
- (id)value;

@end
