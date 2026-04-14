@class NSString, NSTimer;

@interface MADAutoAssetTimed : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long timeoutSecs;
@property (readonly, retain, nonatomic) NSString *timerUUID;
@property (retain, nonatomic) NSTimer *timerInstance;
@property (nonatomic) BOOL timerInvalidated;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimeout:(long long)a0;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
