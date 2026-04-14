@class NSObject;
@protocol OS_os_log;

@interface SDSeedingLogging : NSObject

@property (class, readonly) NSObject<OS_os_log> *httpHandle;
@property (class, readonly) NSObject<OS_os_log> *profileHandle;
@property (class, readonly) NSObject<OS_os_log> *migrateHandle;
@property (class, readonly) NSObject<OS_os_log> *betaHandle;

+ (id)fwHandle;

@end
