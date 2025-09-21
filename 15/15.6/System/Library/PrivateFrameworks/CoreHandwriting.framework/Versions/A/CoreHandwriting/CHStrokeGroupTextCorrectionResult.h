@class NSArray, CHTextCorrectionResult;

@interface CHStrokeGroupTextCorrectionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers;
@property (readonly, copy, nonatomic) CHTextCorrectionResult *textCorrectionResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTextCorrectionResult:(id)a0 inputStrokeIdentifiers:(id)a1;
- (char)isEqualToStrokeGroupTextCorrectionResult:(id)a0;

@end
