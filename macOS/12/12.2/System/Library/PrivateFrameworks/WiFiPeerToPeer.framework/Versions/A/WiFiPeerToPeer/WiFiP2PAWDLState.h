@class NSString, NSArray;

@interface WiFiP2PAWDLState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) BOOL supportsSoloMode;
@property (readonly, nonatomic) NSArray *channelSequence;

+ (id)empty;
+ (id)currentState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0 supportsSoloMode:(BOOL)a1 channelSequence:(id)a2;

@end
