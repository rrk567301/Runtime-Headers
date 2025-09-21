@class NSString, AASessionGroup, NSDictionary;

@interface ICASFastSyncSessionStartEvent : NSObject <AAEventType>

@property (class, readonly, copy, nonatomic) NSString *eventName;
@property (class, readonly, nonatomic) AASessionGroup *sessionGroup;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) long long timestampGranularity;
@property (class, readonly, nonatomic) long long timeDurationGranularity;
@property (class, readonly, nonatomic) long long samplingThreshold;

@property (readonly, copy, nonatomic) NSDictionary *eventProperties;


@end
