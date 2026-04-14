@class NSString;

@interface CCServiceDescriptor : NSObject <CCVisitable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isCIF10OutputEnabled;
@property (nonatomic) BOOL enableLateLatching;
@property (nonatomic) float vrFlagClearValue;
@property (nonatomic) BOOL enableGazeBasedDimming;
@property (nonatomic) BOOL enableAdaptiveRegistration;
@property (readonly, nonatomic) BOOL isSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initPrivate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
