@class NSHashTable;
@protocol MROutputDeviceDataSource;

@interface MROutputDeviceDataSourceCacheItem : NSObject

@property (readonly, nonatomic) id<MROutputDeviceDataSource> dataSource;
@property (readonly, nonatomic) NSHashTable *controllers;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;

@end
