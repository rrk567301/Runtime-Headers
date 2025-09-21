@class NSString;

@interface PGCurationTrait : NSObject

@property (nonatomic) double minimumScore;
@property (readonly, nonatomic) char isMatchingRequired;
@property (readonly, nonatomic) char isActive;
@property (readonly) NSString *niceDescription;

- (id)debugDescription;
- (id)init;
- (char)isActive;
- (char)isMatchingRequired;

@end
