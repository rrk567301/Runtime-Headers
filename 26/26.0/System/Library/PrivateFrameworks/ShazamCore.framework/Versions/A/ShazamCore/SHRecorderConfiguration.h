@class NSDictionary, AMSPromise;

@interface SHRecorderConfiguration : NSObject

@property (readonly) NSDictionary *cacheValues;
@property (readonly) AMSPromise *promise;

- (id)initWithValues:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)availableRecordersForClientIdentifier:(id)a0;
- (id)cacheValuesForIdentifier:(id)a0;
- (id)initWithPromise:(id)a0;

@end
