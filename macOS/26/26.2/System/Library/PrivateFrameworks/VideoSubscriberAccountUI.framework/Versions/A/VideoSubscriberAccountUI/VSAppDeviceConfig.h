@class NSOperationQueue, NSString;

@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)timeZone;
- (id)init;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (BOOL)isTimeZoneSet;

@end
