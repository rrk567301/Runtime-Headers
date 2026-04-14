@class NSSet;

@interface HVContentState : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_consumers;
    unsigned char _levelOfService;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;
- (unsigned long long)hash;
- (unsigned char)levelOfService;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)consumers;
- (id)_initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;

@end
