@class NSString, AASessionGroup, NSDictionary;

@interface ICASFolderSnapshotEvent : NSObject <AAEventType>

@property (class, readonly, copy, nonatomic) NSString *eventName;
@property (class, readonly, nonatomic) AASessionGroup *sessionGroup;
@property (class, readonly, nonatomic) char requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) long long timestampGranularity;
@property (class, readonly, nonatomic) long long timeDurationGranularity;

@property (readonly, copy, nonatomic) NSDictionary *eventProperties;

@end
