@class NSString;

@interface SMTContinuityEnd : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long generatedHostTime;
@property (readonly, copy, nonatomic) NSString *lastTRPCandidateId;
@property (readonly, copy, nonatomic) NSString *requestId;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithGeneratedHostTime:(unsigned long long)a0 lastTRPCandidateId:(id)a1;
- (id)initWithGeneratedHostTime:(unsigned long long)a0 lastTRPCandidateId:(id)a1 requestId:(id)a2;

@end
