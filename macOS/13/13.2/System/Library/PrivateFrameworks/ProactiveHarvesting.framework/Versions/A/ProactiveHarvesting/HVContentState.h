@class NSSet;

@interface HVContentState : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_consumers;
    unsigned char _levelOfService;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)consumers;
- (unsigned char)levelOfService;
- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;
- (id)_initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;

@end
