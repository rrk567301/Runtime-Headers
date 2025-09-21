@class NSArray;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCMutableDeviceConfiguration : _GCDeviceConfiguration

@property (copy) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property unsigned long long priority;
@property (getter=isTransient) char transient;
@property (copy) id<NSObject, NSCopying, NSSecureCoding> deviceIdentifier;
@property (copy) NSArray *deviceDependencies;
@property (copy) id<NSObject, NSCopying, NSSecureCoding> deviceBuilderIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setIdentifier:(id)a0;
- (void)setPriority:(unsigned long long)a0;
- (void)setTransient:(char)a0;
- (void)setDeviceIdentifier:(id)a0;
- (void)setDeviceDependencies:(id)a0;
- (void)setValue:(id)a0 forAttribute:(id)a1;
- (id)_initWithIdentifier:(id)a0 attributes:(id)a1;
- (void)setDeviceBuilderIdentifier:(id)a0;

@end
