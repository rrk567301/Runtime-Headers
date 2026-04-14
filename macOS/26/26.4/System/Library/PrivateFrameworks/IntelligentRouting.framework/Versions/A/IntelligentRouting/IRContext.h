@class NSSet, NSString, NSArray, NSDictionary, NSMutableSet;

@interface IRContext : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet *_internalCandidateResults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *candidateResults;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) BOOL isBannerClassificationUnavailable;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *homeSuggestions;
@property (readonly, nonatomic) NSDictionary *metadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidateResults:(id)a0 isBannerClassificationUnavailable:(BOOL)a1 bundleIdentifier:(id)a2;
- (id)initWithCandidateResults:(id)a0 isBannerClassificationUnavailable:(BOOL)a1 bundleIdentifier:(id)a2 homeSuggestions:(id)a3;
- (id)initWithCandidateResults:(id)a0 isBannerClassificationUnavailable:(BOOL)a1 bundleIdentifier:(id)a2 homeSuggestions:(id)a3 metadata:(id)a4;

@end
