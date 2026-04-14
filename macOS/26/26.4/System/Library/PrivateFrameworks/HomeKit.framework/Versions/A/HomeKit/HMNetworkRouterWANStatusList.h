@class NSMutableArray;

@interface HMNetworkRouterWANStatusList : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *statuses;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithStatuses:(id)a0;
- (id)serializeWithError:(id *)a0;

@end
