@interface CTDataStatusBasic : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char attached;
@property (nonatomic) char hasIndicator;
@property (nonatomic) char inHomeCountry;
@property (nonatomic) char roamAllowed;
@property (nonatomic) char cellularDataPossible;
@property (nonatomic) char newRadioCoverage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
