@class NSString, NSData, UTType;

@interface DADeviceSettings : NSObject <CUXPCCodable, NSCopying>

@property (copy, nonatomic) UTType *iconType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *SSID;
@property (copy, nonatomic) NSData *bridgingIdentifier;
@property (nonatomic) BOOL userInitiated;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;

@end
