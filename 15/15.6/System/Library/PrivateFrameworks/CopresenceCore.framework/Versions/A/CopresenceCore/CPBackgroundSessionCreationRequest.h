@class NSString;

@interface CPBackgroundSessionCreationRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ activitySessionRequest;
    void /* unknown type, empty encoding */ members;
    void /* unknown type, empty encoding */ localMember;
    void /* unknown type, empty encoding */ isCrossAccount;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
