@class NSString, NSOrderedSet, NSURL, SFRankingFeedback, NTPBSectionDisplayDescriptor;

@interface NTSection : NSObject <NTSectionDisplayDescriptor, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *subidentifier;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSURL *actionURL;
@property (copy, nonatomic) NSOrderedSet *items;
@property (copy, nonatomic) SFRankingFeedback *rankingFeedback;
@property (copy, nonatomic) NTPBSectionDisplayDescriptor *displayDescriptor;
@property (copy, nonatomic) NSString *referralBarName;
@property (copy, nonatomic) NSString *backingTagID;
@property (readonly, copy, nonatomic) NSString *personalizationFeatureID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nameColorLight;
@property (readonly, copy, nonatomic) NSString *nameColorDark;
@property (readonly, copy, nonatomic) NSURL *nameActionURL;
@property (readonly, copy, nonatomic) NSString *backgroundColorLight;
@property (readonly, copy, nonatomic) NSString *backgroundColorDark;

+ (id)_itemClassesByType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 subidentifier:(id)a1 actionTitle:(id)a2 actionURL:(id)a3 personalizationFeatureID:(id)a4 items:(id)a5 rankingFeedback:(id)a6 displayDescriptor:(id)a7 referralBarName:(id)a8 backingTagID:(id)a9;

@end
