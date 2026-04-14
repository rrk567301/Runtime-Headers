@class NSString;

@interface CESymbolIcon : CEIcon

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *systemColorName;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
