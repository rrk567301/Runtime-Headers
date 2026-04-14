@interface _CDCandidateInteractionTaxonomy : NSObject <NSCopying> {
    long long _direction;
    long long _mechanism;
}

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
