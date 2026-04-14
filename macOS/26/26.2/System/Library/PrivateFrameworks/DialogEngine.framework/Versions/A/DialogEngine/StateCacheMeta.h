@class NSArray;

@interface StateCacheMeta : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *use_case_state_minutes;
@property (copy, nonatomic) NSArray *use_case_state_counts;
@property (copy, nonatomic) NSArray *family_state_minutes;
@property (copy, nonatomic) NSArray *family_state_counts;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
