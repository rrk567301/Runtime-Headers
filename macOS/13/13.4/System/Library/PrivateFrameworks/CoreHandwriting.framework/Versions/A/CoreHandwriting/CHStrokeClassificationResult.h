@class NSDictionary, NSSet;

@interface CHStrokeClassificationResult : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_textStrokeIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *strokeClassificationsByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *substrokesByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSSet *textStrokeIdentifiers;
@property (readonly, copy, nonatomic) NSSet *nontextCandidates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)a0 substrokesByStrokeIdentifier:(id)a1 nontextCandidates:(id)a2;
- (BOOL)isEqualToStrokeClassificationResult:(id)a0;
- (BOOL)isEquivalentToStrokeClassificationResult:(id)a0;

@end
