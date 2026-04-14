@interface PLCaptureSessionState : NSObject

@property (readonly) unsigned long long type;

+ (id)none;
+ (id)unknown;
+ (id)lockedWithSessionIdentifier:(id)a0;
+ (id)unlockedWithSessionIdentifier:(id)a0;

- (id)initWithType:(unsigned long long)a0;
- (id)init;
- (id)description;

@end
