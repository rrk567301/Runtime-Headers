@class NSString;

@interface CPSDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) CPSDevice *currentDevice;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *buildVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initCurrentDevice;

@end
