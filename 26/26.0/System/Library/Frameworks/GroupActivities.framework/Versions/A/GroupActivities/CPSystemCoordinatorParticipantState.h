@class NSString;

@interface CPSystemCoordinatorParticipantState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isSpatial;
    void /* unknown type, empty encoding */ isSpatialInitiator;
    void /* unknown type, empty encoding */ roleIdentifier;
    void /* unknown type, empty encoding */ xpcWrappedSeat;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
