@class NSString;

@interface ARClipOnSystemState : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long conciseClipOnState;
@property (readonly, nonatomic) NSString *rxUUID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRxUUID:(id)a0 conciseClipOnState:(unsigned long long)a1;

@end
