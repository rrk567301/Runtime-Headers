@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (long long)integerValue;
- (short)valueClass;
- (long long)secondsFromGMT;
- (id)stream;
- (double)valueDouble;
- (double)confidence;
- (BOOL)boolValue;
- (id)uuid;
- (double)doubleValue;
- (id)creationDate;
- (id)structuredMetadata;
- (id)localCreationDate;
- (unsigned long long)hash;
- (id)endDate;
- (id)stringValue;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)streamName;
- (id)startDate;
- (id)source;
- (id)timeZone;
- (id)valueString;
- (long long)valueInteger;
- (id)value;
- (id)metadata;
- (long long)endDayOfWeek;
- (long long)endSecondOfDay;
- (long long)compatibilityVersion;
- (void).cxx_destruct;
- (long long)startSecondOfDay;
- (BOOL)isEqual:(id)a0;
- (long long)valueTypeCode;
- (id)customMetadata;
- (id)UUID;
- (id)uuidHash;
- (long long)startDayOfWeek;

@end
