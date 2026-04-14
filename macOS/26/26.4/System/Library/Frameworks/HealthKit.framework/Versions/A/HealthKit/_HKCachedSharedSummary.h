@class HKSharedSummary;

@interface _HKCachedSharedSummary : NSObject

@property (readonly, nonatomic) HKSharedSummary *summary;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSummary:(id)a0;

@end
