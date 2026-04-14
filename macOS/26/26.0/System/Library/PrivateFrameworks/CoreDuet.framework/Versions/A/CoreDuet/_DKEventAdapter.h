@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (long long)integerValue;
- (id)stream;
- (double)valueDouble;
- (double)confidence;
- (id)streamName;
- (id)UUID;
- (id)value;
- (BOOL)boolValue;
- (id)timeZone;
- (id)metadata;
- (long long)endSecondOfDay;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)stringValue;
- (long long)secondsFromGMT;
- (long long)startDayOfWeek;
- (id)structuredMetadata;
- (double)doubleValue;
- (id)endDate;
- (id)localCreationDate;
- (id)customMetadata;
- (id)creationDate;
- (id)valueString;
- (short)valueClass;
- (id)uuid;
- (long long)endDayOfWeek;
- (long long)compatibilityVersion;
- (id)startDate;
- (long long)valueInteger;
- (long long)valueTypeCode;
- (id)uuidHash;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)startSecondOfDay;
- (id)source;

@end
