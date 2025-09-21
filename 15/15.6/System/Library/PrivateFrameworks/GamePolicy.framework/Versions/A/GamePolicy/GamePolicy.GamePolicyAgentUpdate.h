@class NSString;

@interface GamePolicy.GamePolicyAgentUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ userIdentifiedGames;
    void /* unknown type, empty encoding */ consoleModeSignalingGames;
    void /* unknown type, empty encoding */ consoleModeUserDisabledGames;
    void /* unknown type, empty encoding */ consoleModeEnabled;
    void /* unknown type, empty encoding */ consoleModePausedByUser;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
