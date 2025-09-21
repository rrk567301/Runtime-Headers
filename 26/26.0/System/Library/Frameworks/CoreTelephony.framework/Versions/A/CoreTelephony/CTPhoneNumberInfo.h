@class NSString;

@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *number;
@property (retain, nonatomic) NSString *displayPhoneNumber;
@property (nonatomic) BOOL isPresent;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isRead;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
