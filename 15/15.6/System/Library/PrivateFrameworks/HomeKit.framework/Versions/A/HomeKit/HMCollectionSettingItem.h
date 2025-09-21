@class NSUUID;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface HMCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
