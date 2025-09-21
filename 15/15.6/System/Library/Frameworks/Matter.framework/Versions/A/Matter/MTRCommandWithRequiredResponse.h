@class MTRCommandPath, NSDictionary;

@interface MTRCommandWithRequiredResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) MTRCommandPath *path;
@property (retain, nonatomic) NSDictionary *commandFields;
@property (copy, nonatomic) NSDictionary *requiredResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPath:(id)a0 commandFields:(id)a1 requiredResponse:(id)a2;
- (char)_isEqualToOther:(id)a0;

@end
