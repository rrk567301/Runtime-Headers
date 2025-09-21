@class NSString, UTType;

@interface GCDeviceType : NSObject <NSCopying>

@property (readonly) NSString *identifier;
@property (readonly) UTType *type;
@property (readonly) NSString *localizedDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)deviceTypeWithIdentifier:(id)a0;
+ (id)deviceTypeWithUTType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)conformsToType:(id)a0;
- (BOOL)conformsToDeviceType:(id)a0;

@end
