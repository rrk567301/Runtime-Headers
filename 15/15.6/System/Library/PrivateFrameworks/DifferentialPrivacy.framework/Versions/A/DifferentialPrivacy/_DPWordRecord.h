@class NSNumber, NSString;

@interface _DPWordRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *wordPosition;
@property (readonly, copy, nonatomic) NSString *word;

+ (id)word:(id)a0 atPosition:(id)a1;
+ (id)bogusCharacter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWord:(id)a0 atPosition:(id)a1;
- (char)isEqualToWordRecord:(id)a0;
- (id)sequenceWithoutPadding;

@end
