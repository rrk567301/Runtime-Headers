@class NSNumber, NSString;

@interface _DPWordRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *wordPosition;
@property (readonly, copy, nonatomic) NSString *word;

+ (id)word:(id)a0 atPosition:(id)a1;
+ (id)bogusCharacter;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWord:(id)a0 atPosition:(id)a1;
- (BOOL)isEqualToWordRecord:(id)a0;
- (id)sequenceWithoutPadding;

@end
