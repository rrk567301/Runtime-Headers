@class NSObject;
@protocol OS_dispatch_queue;

@interface PNRPhoneNumberResolver : NSObject {
    NSObject<OS_dispatch_queue> *_resolveQueue;
}

- (void)_recordUsageAnalyticForCountryCode:(id)a0 success:(BOOL)a1;
- (id)_notAPhoneNumberError;
- (id)init;
- (void)resolveFullyQualifiedPhoneNumber:(id)a0 inCountry:(id)a1 logId:(id)a2 resultBlock:(id /* block */)a3;
- (id)resolvePhoneNumber:(id)a0 countryCode:(id)a1 error:(id *)a2;
- (void)resolvePhoneNumbers:(id)a0 handler:(id /* block */)a1 queue:(id)a2;
- (void)resolvePhoneNumbers:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)_notFullyQualifiedError;
- (void).cxx_destruct;

@end
