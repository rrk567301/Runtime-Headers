@class NSMutableArray;

@interface HMNetworkRouterWANStatusList : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *statuses;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)description;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithStatuses:(id)a0;
- (id)serializeWithError:(id *)a0;

@end
