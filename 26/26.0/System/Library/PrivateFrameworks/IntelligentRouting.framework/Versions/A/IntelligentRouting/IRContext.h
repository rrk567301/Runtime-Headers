@class NSSet, NSString, NSMutableSet;

@interface IRContext : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet *_internalCandidateResults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *candidateResults;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) BOOL isBannerClassificationUnavailable;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCandidateResults:(id)a0 isBannerClassificationUnavailable:(BOOL)a1 bundleIdentifier:(id)a2;

@end
