@class NSString, NSArray;

@interface EMTSentencePieceText : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *pieces;
@property (readonly, nonatomic) float score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 pieces:(id)a1;
- (id)initWithText:(id)a0 pieces:(id)a1 score:(float)a2;

@end
