@class NSUUID;

@interface TUJoinContinuityConversationRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) char isAudioEnabled;
@property (readonly, nonatomic) char isVideoEnabled;
@property (readonly, nonatomic) char wantsStagingArea;

+ (id)requestForJoinWithUUID:(id)a0 isAudioEnabled:(char)a1 isVideoEnabled:(char)a2;
+ (id)requestForStagingAreaWithUUID:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 isAudioEnabled:(char)a1 isVideoEnabled:(char)a2 wantsStagingArea:(char)a3;

@end
