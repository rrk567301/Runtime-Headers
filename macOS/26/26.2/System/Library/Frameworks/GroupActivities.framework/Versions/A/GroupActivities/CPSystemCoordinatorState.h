@class NSString;

@interface CPSystemCoordinatorState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ localParticipantState;
    void /* unknown type, empty encoding */ remoteParticipantStates;
    void /* unknown type, empty encoding */ groupImmersionStyle;
    void /* unknown type, empty encoding */ activeSpatialParticipantCount;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
