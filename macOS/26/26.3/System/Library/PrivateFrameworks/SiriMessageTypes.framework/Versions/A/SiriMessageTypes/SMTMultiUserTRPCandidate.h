@class NSString, NSArray;

@interface SMTMultiUserTRPCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *multiUserTrpCandidateId;
@property (readonly, copy, nonatomic) NSString *requestId;
@property (readonly, copy, nonatomic) NSArray *trpCandidateList;

- (id)initWithBuilder:(id /* block */)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
