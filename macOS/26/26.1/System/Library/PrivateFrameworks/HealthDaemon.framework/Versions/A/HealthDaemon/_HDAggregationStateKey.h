@class NSString, HKDevice;

@interface _HDAggregationStateKey : NSObject <NSCopying> {
    NSString *_collectorIdentifier;
    HKDevice *_device;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
