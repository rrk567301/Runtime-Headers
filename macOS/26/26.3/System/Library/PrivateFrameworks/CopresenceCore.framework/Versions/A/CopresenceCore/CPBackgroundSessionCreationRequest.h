@class NSString;

@interface CPBackgroundSessionCreationRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ activitySessionRequest;
    void /* unknown type, empty encoding */ members;
    void /* unknown type, empty encoding */ localMember;
    void /* unknown type, empty encoding */ isCrossAccount;
    void /* unknown type, empty encoding */ requiresParticipantHandles;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
