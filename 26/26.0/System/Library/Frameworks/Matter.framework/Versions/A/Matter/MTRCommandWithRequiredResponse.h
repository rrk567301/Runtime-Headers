@class MTRCommandPath, NSDictionary;

@interface MTRCommandWithRequiredResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MTRCommandPath *path;
@property (retain, nonatomic) NSDictionary *commandFields;
@property (copy, nonatomic) NSDictionary *requiredResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 commandFields:(id)a1 requiredResponse:(id)a2;
- (BOOL)_isEqualToOther:(id)a0;

@end
