@class NSDictionary, NSArray;
@protocol MTEventDataProviderDelegate;

@interface MTEventDataProvider : MTObject

@property (retain) NSDictionary *knownFieldMethods;
@property (retain) NSArray *additionalData;
@property (weak) id<MTEventDataProviderDelegate> delegate;

- (void).cxx_destruct;
- (void)addFields:(id)a0;
- (void)addFieldsWithDictionary:(id)a0;
- (void)addFieldsWithPromise:(id)a0;
- (id)knownFields;
- (id)processMetricsData:(id)a0 performanceData:(id)a1;
- (id)flattenAdditionalData;
- (id)knownFieldMethodsForKnownFields:(id)a0;
- (SEL)knownFieldAccessorForFieldName:(id)a0;
- (void)addFieldsWithBlock:(id /* block */)a0;

@end
