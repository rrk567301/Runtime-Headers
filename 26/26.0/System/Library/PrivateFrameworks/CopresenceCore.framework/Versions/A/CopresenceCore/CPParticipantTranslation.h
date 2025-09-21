@class NSString;

@interface CPParticipantTranslation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ aliasedIdentifier;
    void /* unknown type, empty encoding */ unaliasedIdentifier;
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ isNearby;
    void /* unknown type, empty encoding */ stableDeviceIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
