@class NSString;

@interface CHSynthesisModelHashes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *latin;
@property (readonly, nonatomic) NSString *zhJa;
@property (readonly, nonatomic) NSString *ko;

+ (id)modelHashesWithLatinHash:(id)a0 zhJaHash:(id)a1 koHash:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateHashZhJa:(id)a0;
- (id)initWithLatinHash:(id)a0 zhJaHash:(id)a1 koHash:(id)a2;
- (void)updateHashKo:(id)a0;
- (void)updateHashLatin:(id)a0;

@end
