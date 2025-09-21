@class NSSet;

@interface MXMSampleTagFilter : MXMSampleTag <NSCopying, NSSecureCoding> {
    char _allowDescendents;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char finite;
@property (readonly, nonatomic, getter=finite) char isFinite;
@property (copy, nonatomic) NSSet *tagPermutations;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTag:(id)a0 allowDescendents:(char)a1;
- (char)matchesSampleWithTag:(id)a0;

@end
