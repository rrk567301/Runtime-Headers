@class NSString;

@interface CTCellularConfigUpdateInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *configType;
@property (retain, nonatomic) NSString *updatedTime;
@property (retain, nonatomic) NSString *updatedDetails;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
