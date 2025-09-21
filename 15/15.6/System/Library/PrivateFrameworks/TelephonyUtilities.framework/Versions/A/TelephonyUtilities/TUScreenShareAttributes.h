@class NSUUID, NSString, NSValue, NSNumber;

@interface TUScreenShareAttributes : NSObject <TUScreenShareAttributes>

@property (class, readonly, nonatomic) long long currentDeviceFamily;
@property (class, readonly, nonatomic) long long currentDeviceHomeButtonType;
@property (class, readonly, copy, nonatomic) NSNumber *defaultDisplayScale;
@property (class, readonly, copy, nonatomic) NSNumber *defaultScaleFactor;
@property (class, readonly, copy, nonatomic) NSNumber *defaultCornerRadius;
@property (class, readonly, copy, nonatomic) NSValue *defaultSystemRootLayerTransform;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long deviceFamily;
@property (nonatomic) long long deviceHomeButtonType;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *displayScale;
@property (retain, nonatomic) NSNumber *scaleFactor;
@property (retain, nonatomic) NSNumber *cornerRadius;
@property (retain, nonatomic) NSValue *systemRootLayerTransform;
@property (retain, nonatomic) NSValue *originalResolution;
@property (retain, nonatomic) NSNumber *frameRate;
@property (retain, nonatomic) NSNumber *displayID;
@property (nonatomic, getter=isWindowed) char windowed;
@property (retain, nonatomic) NSUUID *windowUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAttributes;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttributes:(id)a0;
- (char)isEqualToScreenShareAttributes:(id)a0;
- (char)isSignificantChangeFromAttributes:(id)a0;

@end
