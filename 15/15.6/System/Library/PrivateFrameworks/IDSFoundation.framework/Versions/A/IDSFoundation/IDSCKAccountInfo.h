@interface IDSCKAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char supportsDeviceToDeviceEncryption;

+ (id)alloc;
+ (Class)__class;

@end
