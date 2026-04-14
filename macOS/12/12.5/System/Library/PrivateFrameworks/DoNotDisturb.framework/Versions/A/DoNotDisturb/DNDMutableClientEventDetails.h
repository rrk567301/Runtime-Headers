@class NSString, DNDContactHandle;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property BOOL notifyAnyway;
@property unsigned long long behavior;
@property (copy) NSString *identifier;
@property (copy) NSString *bundleIdentifier;
@property unsigned long long type;
@property unsigned long long urgency;
@property (copy) DNDContactHandle *sender;
@property (copy) NSString *threadIdentifier;
@property BOOL shouldAlwaysInterrupt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(unsigned long long)a0;
- (void)setBundleIdentifier:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setBehavior:(unsigned long long)a0;
- (void)setUrgency:(unsigned long long)a0;
- (void)setSender:(id)a0;
- (void)setThreadIdentifier:(id)a0;
- (void)setNotifyAnyway:(BOOL)a0;
- (void)setShouldAlwaysInterrupt:(BOOL)a0;

@end
