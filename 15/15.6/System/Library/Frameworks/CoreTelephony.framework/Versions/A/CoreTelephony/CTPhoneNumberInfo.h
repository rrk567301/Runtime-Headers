@class NSString;

@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *number;
@property (retain, nonatomic) NSString *displayPhoneNumber;
@property (nonatomic) char isPresent;
@property (nonatomic) char isEditable;
@property (nonatomic) char isRead;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
