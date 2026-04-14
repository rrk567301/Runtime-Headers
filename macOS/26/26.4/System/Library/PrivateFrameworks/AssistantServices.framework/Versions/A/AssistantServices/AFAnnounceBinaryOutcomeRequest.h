@protocol AFAnnounceBinaryOutcomeUseCaseV2;

@interface AFAnnounceBinaryOutcomeRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long useCase;
@property (readonly, copy, nonatomic) id<AFAnnounceBinaryOutcomeUseCaseV2> useCaseV2;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithUseCase:(long long)a0 useCaseV2:(id)a1;

@end
