@class HKQuantitySample;

@interface HDQuantitySeriesEditorTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleEditorTaskServerInterface> {
    HKQuantitySample *_quantitySample;
}

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;

- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)remote_commitRemovedDatums:(id)a0 completion:(id /* block */)a1;

@end
