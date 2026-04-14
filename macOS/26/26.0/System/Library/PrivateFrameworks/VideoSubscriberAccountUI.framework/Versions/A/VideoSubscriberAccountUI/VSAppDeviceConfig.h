@class NSOperationQueue, NSString;

@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timeZone;
- (id)init;
- (void).cxx_destruct;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (BOOL)isTimeZoneSet;

@end
