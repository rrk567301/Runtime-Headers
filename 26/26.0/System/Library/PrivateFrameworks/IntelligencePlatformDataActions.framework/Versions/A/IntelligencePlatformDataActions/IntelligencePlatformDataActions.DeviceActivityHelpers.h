@class NSString, NSArray, NSDate, NSError;

@interface IntelligencePlatformDataActions.DeviceActivityHelpers : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appInfoCache;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchSegmentsWithStartDate:(NSDate *)a0 endDate:(NSDate *)a1 userId:(NSString *)a2 deviceId:(NSString *)a3 completionHandler:(void (^)(NSArray *, NSError *))a4;

@end
