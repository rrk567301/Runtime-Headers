@class NSString;

@interface CTCellularConfigUpdateInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *configType;
@property (retain, nonatomic) NSString *updatedTime;
@property (retain, nonatomic) NSString *updatedDetails;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
