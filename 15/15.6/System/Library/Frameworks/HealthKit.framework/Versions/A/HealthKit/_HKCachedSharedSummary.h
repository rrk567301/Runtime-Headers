@class HKSharedSummary;

@interface _HKCachedSharedSummary : NSObject

@property (readonly, nonatomic) HKSharedSummary *summary;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSummary:(id)a0;

@end
