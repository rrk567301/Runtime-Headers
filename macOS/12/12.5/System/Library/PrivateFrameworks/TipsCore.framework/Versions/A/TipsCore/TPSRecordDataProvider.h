@protocol TPSRecordDataProviderDataSource;

@interface TPSRecordDataProvider : NSObject

@property (weak, nonatomic) id<TPSRecordDataProviderDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;

@end
