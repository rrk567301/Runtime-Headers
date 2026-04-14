@class NSString;

@interface CESymbolIcon : CEIcon

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *systemColorName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
