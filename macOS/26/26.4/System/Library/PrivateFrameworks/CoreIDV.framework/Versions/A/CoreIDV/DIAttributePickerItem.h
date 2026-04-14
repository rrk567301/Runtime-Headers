@class NSString;

@interface DIAttributePickerItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
