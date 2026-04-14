@class NSArray, NSString;

@interface EWSSRVLookup : NSObject

@property (copy, nonatomic) NSArray *discoveredRecords;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *servicePrefix;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (BOOL)lookup;
- (id)initWithServicePrefix:(id)a0 onHost:(id)a1;

@end
