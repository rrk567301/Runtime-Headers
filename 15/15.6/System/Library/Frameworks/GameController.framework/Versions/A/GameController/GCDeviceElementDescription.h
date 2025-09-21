@class NSString, NSSet;

@interface GCDeviceElementDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSSet *additionalAliases;
@property (readonly, getter=isRemappable) char remappable;
@property (readonly, getter=isMappableToSystemGestures) char mappableToSystemGestures;
@property (readonly, getter=isBoundToSystemGesture) char boundToSystemGesture;
@property (readonly) NSString *nameLocalizationKey;
@property (readonly) NSString *symbolName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedName;

@end
