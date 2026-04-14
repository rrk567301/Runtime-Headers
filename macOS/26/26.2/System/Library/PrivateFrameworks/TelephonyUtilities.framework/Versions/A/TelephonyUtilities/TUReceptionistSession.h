@class NSString;

@interface TUReceptionistSession : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *predictedName;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSummary:(id)a0 predictedName:(id)a1;
- (BOOL)isEqualToSession:(id)a0;

@end
