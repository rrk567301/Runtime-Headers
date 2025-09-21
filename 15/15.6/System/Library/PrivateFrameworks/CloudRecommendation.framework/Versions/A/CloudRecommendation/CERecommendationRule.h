@class NSString, CERuleCriteria, CERecommendationStringTemplate, NSNumber;

@interface CERecommendationRule : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *titleHint;
@property (copy, nonatomic) NSString *messageHint;
@property (copy, nonatomic) NSNumber *rankingHint;
@property (copy, nonatomic) NSString *recommendationID;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) char ignoreClientRank;
@property (retain, nonatomic) NSNumber *lastCompletedTimeStamp;
@property (retain, nonatomic) CERuleCriteria *criteria;
@property (retain, nonatomic) CERecommendationStringTemplate *templates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
