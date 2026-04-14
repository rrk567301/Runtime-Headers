@class NSString, NSTimer;

@interface MADAutoAssetTimed : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) id requestBeingTimed;
@property (readonly, nonatomic) long long timeoutSecs;
@property (readonly, retain, nonatomic) NSString *timerUUID;
@property (retain, nonatomic) NSTimer *timerInstance;
@property (nonatomic) BOOL timerInvalidated;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)initForRequest:(id)a0 withTimeout:(long long)a1;

@end
