@class NSString, NSDictionary;

@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) long long totalNumberOfImportedPersons;
@property (readonly) long long numberOfNamedImportedPersons;


- (id)initWithTotalNumberOfImportedPersons:(long long)a0 numberOfNamedImportedPersons:(long long)a1;

@end
