@class NSString;

@interface CTSimLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *unique_id;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) char didSetup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithId:(id)a0 andText:(id)a1 andDidSetup:(char)a2;

@end
