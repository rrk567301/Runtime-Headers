@interface TUUIContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long inCallUIState;
@property (readonly, nonatomic, getter=isMicIndicatorVisible) char isMicIndicatorVisible;
@property (readonly, nonatomic, getter=isFullScreen) char fullScreen;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(unsigned long long)a0;

@end
