@class NSNumber, NSString;

@interface _DPWordRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *wordPosition;
@property (readonly, copy, nonatomic) NSString *word;

+ (id)word:(id)a0 atPosition:(id)a1;
+ (id)sequenceAndFragmentsFrom:(id)a0 fragmentLimit:(unsigned long long)a1 fragmentWidth:(unsigned long long)a2 puzzlePieceCount:(unsigned long long)a3;
+ (id)bogusCharacter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)sequenceWithoutPadding;
- (id)initWithWord:(id)a0 atPosition:(id)a1;
- (BOOL)isEqualToWordRecord:(id)a0;

@end
