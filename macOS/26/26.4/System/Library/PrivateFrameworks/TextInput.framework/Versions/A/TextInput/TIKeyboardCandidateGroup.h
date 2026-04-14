@class NSString, NSOrderedSet;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *title;
@property (copy) NSOrderedSet *candidates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)addCandidate:(id)a0;
- (BOOL)hasAlternativeText;
- (id)initWithTitle:(id)a0 candidates:(id)a1;
- (id)mutableCandidates;

@end
