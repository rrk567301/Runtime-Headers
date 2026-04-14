@class NSMutableArray;

@interface HMNetworkRouterWANStatusList : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *statuses;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStatuses:(id)a0;
- (id)serializeWithError:(id *)a0;

@end
