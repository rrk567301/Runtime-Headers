@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (id)startDate;
- (double)confidence;
- (id)stringValue;
- (short)valueClass;
- (long long)valueTypeCode;
- (id)customMetadata;
- (id)creationDate;
- (id)structuredMetadata;
- (double)doubleValue;
- (id)streamName;
- (id)valueString;
- (long long)secondsFromGMT;
- (long long)integerValue;
- (id)stream;
- (long long)compatibilityVersion;
- (BOOL)isEqual:(id)a0;
- (long long)endSecondOfDay;
- (BOOL)boolValue;
- (long long)startDayOfWeek;
- (double)valueDouble;
- (id)source;
- (id)timeZone;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (long long)endDayOfWeek;
- (id)localCreationDate;
- (id)metadata;
- (long long)valueInteger;
- (id)uuidHash;
- (id)value;
- (id)uuid;
- (id)endDate;
- (long long)startSecondOfDay;
- (id)UUID;

@end
