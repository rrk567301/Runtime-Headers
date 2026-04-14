@class NSSet;

@interface HVContentState : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_consumers;
    unsigned char _levelOfService;
}

- (unsigned char)levelOfService;
- (id)description;
- (id)init;
- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)consumers;
- (id)_initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;

@end
