@class NSMutableDictionary, RPCompanionLinkDevice;

@interface RPStatusDevice : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) RPCompanionLinkDevice *device;
@property (retain, nonatomic) NSMutableDictionary *statusInfoMap;
@property (retain, nonatomic) NSMutableDictionary *statusStateMap;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)getIdentifier;

@end
