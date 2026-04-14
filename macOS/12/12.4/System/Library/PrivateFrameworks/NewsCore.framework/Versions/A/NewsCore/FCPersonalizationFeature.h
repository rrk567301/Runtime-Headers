@class NSString;

@interface FCPersonalizationFeature : NSObject <NSCopying> {
    NSString *_personalizationIdentifier;
    NSString *_tagID;
}

@property (nonatomic) BOOL shouldBeBoosted;
@property (readonly, nonatomic) NSString *personalizationIdentifier;
@property (readonly, nonatomic) NSString *fc_description;
@property (readonly, nonatomic) NSString *tagID;

+ (id)featuresFromTagIDs:(id)a0;
+ (id)featuresFromPersonalizingItem:(id)a0 personalizationTreatment:(id)a1;
+ (id)featureFromTagID:(id)a0;
+ (id)featureForFreeValuedIdentifier:(id)a0;
+ (id)featuresFromIssue:(id)a0;
+ (id)featuresFromHeadline:(id)a0 personalizationTreatment:(id)a1;
+ (id)featuresFromTodayPersonalizationEvent:(id)a0;
+ (id)featuresFromTag:(id)a0;
+ (id)featureForIdentifier:(id)a0;
+ (id)featureObserver;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;

@end
