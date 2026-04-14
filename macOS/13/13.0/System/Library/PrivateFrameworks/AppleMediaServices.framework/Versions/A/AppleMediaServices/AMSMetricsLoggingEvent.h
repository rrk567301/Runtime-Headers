@class NSString, NSArray, NSDictionary, NSError;

@interface AMSMetricsLoggingEvent : AMSMetricsEvent

@property (readonly) NSString *category;
@property (retain) NSString *clientApp;
@property (retain) NSString *clientBuildType;
@property (retain) NSString *currentProcess;
@property (retain) NSString *engagementEventType;
@property (readonly) NSError *error;
@property unsigned long long errorCode;
@property (retain) NSString *errorDomain;
@property (retain) NSString *errorMessage;
@property (retain) NSString *errorTitle;
@property long long errorUserInfoCryptoCode;
@property BOOL errorUserInfoEngagementPresented;
@property long long errorUserInfoServerErrorCode;
@property long long errorUserInfoStatusCode;
@property (retain) NSArray *eventDestinations;
@property double eventEndTime;
@property BOOL eventInlineInterruption;
@property (retain) NSString *eventParamEventType;
@property (retain) NSString *eventParamItemId;
@property (retain) NSString *eventParamProductType;
@property (retain) NSString *eventParamSource;
@property (retain) NSString *eventParamSuccess;
@property (retain) NSString *eventPlacement;
@property (retain) NSString *eventServiceType;
@property double eventStartTime;
@property (retain) NSDictionary *jsVersions;
@property (retain) NSArray *jsVersionMap;
@property long long logLevel;
@property (retain) NSString *originatingURL;
@property (retain) NSString *originatingURLParamBagProfile;
@property (retain) NSString *originatingURLParamBagProfileVersion;
@property (retain) NSString *releaseVersion;
@property (readonly) NSString *subsystem;
@property unsigned long long underlyingErrorCode;
@property (retain) NSString *underlyingErrorDomain;
@property (retain) NSString *underlyingErrorMessage;
@property (retain) NSString *underlyingErrorTitle;
@property long long underlyingErrorUserInfoCryptoCode;
@property BOOL underlyingErrorUserInfoEngagementPresented;
@property long long underlyingErrorUserInfoServerErrorCode;
@property long long underlyingErrorUserInfoStatusCode;
@property (retain) NSString *url;
@property (retain) NSString *urlParamBagProfile;
@property (retain) NSString *urlParamBagProfileVersion;

+ (id)shouldSampleErrorsWithBag:(id)a0;

- (void).cxx_destruct;
- (void)setCategory:(id)a0;
- (void)setSubsystem:(id)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1 error:(id)a2;
- (void)prepareEvent;
- (id)getBuildType;

@end
