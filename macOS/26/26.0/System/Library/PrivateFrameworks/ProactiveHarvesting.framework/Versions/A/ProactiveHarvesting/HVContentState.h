@class NSSet;

@interface HVContentState : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_consumers;
    unsigned char _levelOfService;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;
- (unsigned long long)hash;
- (unsigned char)levelOfService;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)consumers;
- (id)_initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;

@end
