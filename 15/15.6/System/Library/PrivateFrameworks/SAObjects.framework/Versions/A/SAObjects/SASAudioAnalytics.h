@class NSDictionary, NSString;

@interface SASAudioAnalytics : AceObject <SAAceSerializable>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *acousticFeatures;
@property (copy, nonatomic) NSDictionary *speechRecognitionFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)audioAnalyticsWithDictionary:(id)a0 context:(id)a1;
+ (id)audioAnalytics;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
