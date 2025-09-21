@class NSString, NSOrderedSet;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *title;
@property (copy) NSOrderedSet *candidates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addCandidate:(id)a0;
- (char)hasAlternativeText;
- (id)initWithTitle:(id)a0 candidates:(id)a1;
- (id)mutableCandidates;

@end
