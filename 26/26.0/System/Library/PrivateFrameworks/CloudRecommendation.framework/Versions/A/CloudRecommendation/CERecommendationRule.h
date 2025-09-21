@class NSString, CERuleCriteria, CERecommendationStringTemplate, NSNumber;

@interface CERecommendationRule : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *titleHint;
@property (copy, nonatomic) NSString *messageHint;
@property (copy, nonatomic) NSNumber *rankingHint;
@property (copy, nonatomic) NSString *recommendationID;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL ignoreClientRank;
@property (retain, nonatomic) NSNumber *lastCompletedTimeStamp;
@property (retain, nonatomic) CERuleCriteria *criteria;
@property (retain, nonatomic) CERecommendationStringTemplate *templates;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
