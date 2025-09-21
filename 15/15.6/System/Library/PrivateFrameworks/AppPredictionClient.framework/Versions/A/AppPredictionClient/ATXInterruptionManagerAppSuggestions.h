@class NSMutableArray;

@interface ATXInterruptionManagerAppSuggestions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *recommendedApps;
@property (readonly, nonatomic) NSMutableArray *candidateApps;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addCandidateApp:(id)a0;
- (void)addRecommendedApp:(id)a0;
- (id)initWithRecommendedApps:(id)a0 candidateApps:(id)a1;

@end
