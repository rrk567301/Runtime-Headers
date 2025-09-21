@class NSString, NSMutableArray;

@interface CTSimDeactivationInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *homePlmn;
@property (retain, nonatomic) NSMutableArray *events;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
