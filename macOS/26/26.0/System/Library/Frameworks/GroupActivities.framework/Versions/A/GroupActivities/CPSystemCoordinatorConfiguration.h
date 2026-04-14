@class NSString;

@interface CPSystemCoordinatorConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ supportsGroupImmersiveSpace;
    void /* unknown type, empty encoding */ isObservingGroupImmersionStyle;
    void /* unknown type, empty encoding */ faceAppTowardsEachParticipant;
    void /* unknown type, empty encoding */ wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
