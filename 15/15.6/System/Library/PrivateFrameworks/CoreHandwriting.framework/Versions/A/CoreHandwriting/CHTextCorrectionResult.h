@class NSError, CHTextInputTarget, CHTokenizedTextResult;

@interface CHTextCorrectionResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) CHTextInputTarget *inputTarget;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } affectedRange;
@property (readonly, nonatomic) CHTokenizedTextResult *textResult;
@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic, getter=isCharacterLevel) char characterLevel;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInputTarget:(id)a0 affectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textResult:(id)a2 resultType:(long long)a3 isCharacterLevel:(char)a4 error:(id)a5;
- (char)isEqualToTextCorrectionResult:(id)a0;

@end
