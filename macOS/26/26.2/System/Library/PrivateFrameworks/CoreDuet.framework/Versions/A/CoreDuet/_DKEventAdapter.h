@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (id)stream;
- (double)confidence;
- (id)uuid;
- (long long)integerValue;
- (double)valueDouble;
- (id)streamName;
- (id)creationDate;
- (long long)secondsFromGMT;
- (unsigned long long)hash;
- (id)endDate;
- (BOOL)isEqual:(id)a0;
- (id)valueString;
- (id)source;
- (id)forwardingTargetForSelector:(SEL)a0;
- (long long)valueTypeCode;
- (id)metadata;
- (id)uuidHash;
- (void).cxx_destruct;
- (BOOL)boolValue;
- (id)customMetadata;
- (double)doubleValue;
- (id)stringValue;
- (id)UUID;
- (id)localCreationDate;
- (long long)endDayOfWeek;
- (long long)endSecondOfDay;
- (id)value;
- (id)startDate;
- (long long)valueInteger;
- (id)structuredMetadata;
- (long long)startSecondOfDay;
- (long long)startDayOfWeek;
- (id)timeZone;
- (short)valueClass;
- (long long)compatibilityVersion;

@end
