@class NSMutableSet;

@interface HVContentState : NSObject

@property (readonly, nonatomic) NSMutableSet *consumers;
@property (nonatomic) unsigned char levelOfService;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;

@end
