@class NSSet;

@interface COCapabilityUpdateNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSSet *capabilities;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCapabilities:(id)a0;

@end
