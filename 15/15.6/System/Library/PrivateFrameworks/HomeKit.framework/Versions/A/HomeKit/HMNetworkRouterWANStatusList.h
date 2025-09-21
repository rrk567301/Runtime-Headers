@class NSMutableArray;

@interface HMNetworkRouterWANStatusList : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *statuses;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithStatuses:(id)a0;
- (id)serializeWithError:(id *)a0;

@end
