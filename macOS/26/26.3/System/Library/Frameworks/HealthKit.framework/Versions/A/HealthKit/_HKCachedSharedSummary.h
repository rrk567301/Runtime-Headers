@class HKSharedSummary;

@interface _HKCachedSharedSummary : NSObject

@property (readonly, nonatomic) HKSharedSummary *summary;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSummary:(id)a0;

@end
