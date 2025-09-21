@class NSString;

@interface PPScoredContactHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *contactHandle;
@property (readonly, nonatomic) double score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)reverseCompare:(id)a0;
- (id)initWithContactHandle:(id)a0 score:(double)a1;
- (char)isEqualToScoredContactHandle:(id)a0;

@end
