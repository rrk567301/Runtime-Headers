@class NSNumber;

@interface MTRSubscribeParams : MTRReadParams

@property (copy, nonatomic) NSNumber *keepPreviousSubscriptions;
@property (copy, nonatomic) NSNumber *autoResubscribe;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
