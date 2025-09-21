@class NSDictionary, NSSet, NSString;

@interface AAPrivacySensitiveDictionaryLog : NSObject <AAPrivacySensitiveLog>

@property (readonly, nonatomic) NSDictionary *response;
@property (readonly, nonatomic) NSSet *keysToRedact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
