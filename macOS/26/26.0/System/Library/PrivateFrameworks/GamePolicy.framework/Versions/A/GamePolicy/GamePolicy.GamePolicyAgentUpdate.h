@class NSString;

@interface GamePolicy.GamePolicyAgentUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ userIdentifiedGames;
    void /* unknown type, empty encoding */ consoleModeSignalingGames;
    void /* unknown type, empty encoding */ consoleModeUserDisabledGames;
    void /* unknown type, empty encoding */ consoleModeEnabled;
    void /* unknown type, empty encoding */ consoleModePausedByUser;
    void /* unknown type, empty encoding */ userFrontmostGame;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
