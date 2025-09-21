@class NSArray, NSString;

@interface ATXComplicationSet : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, copy, nonatomic) NSString *localizedTitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithComplications:(id)a0;
- (id)initWithComplications:(id)a0 localizedTitle:(id)a1;

@end
