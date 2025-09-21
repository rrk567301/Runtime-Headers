@class NSUUID, NSArray;

@interface TUSmartHoldingSession : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long requiresUserAttentionReason;
@property (readonly, nonatomic, getter=isHostedOnCurrentDevice) BOOL hostedOnCurrentDevice;
@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSArray *transcription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 state:(unsigned long long)a1 events:(id)a2 requiresUserAttentionReason:(unsigned long long)a3 hostedOnCurrentDevice:(BOOL)a4;
- (BOOL)isEqualToSession:(id)a0;

@end
