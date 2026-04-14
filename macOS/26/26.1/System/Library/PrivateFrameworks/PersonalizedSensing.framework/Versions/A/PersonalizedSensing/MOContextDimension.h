@class NSArray, NSString;

@interface MOContextDimension : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *queries;
@property (retain, nonatomic) NSString *name;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
