@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) BOOL sendRetried;
@property (nonatomic) BOOL ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (BOOL)wasCancelled;
- (void)setCancelled:(BOOL)a0;
- (void)setSent:(BOOL)a0;
- (id)channelID;
- (BOOL)isEager;
- (unsigned int)pushFlags;
- (void)setPushFlags:(unsigned int)a0;
- (BOOL)wasSent;
- (void)setTimestamp:(id)a0;
- (long long)priority;
- (void)setTimedOut:(BOOL)a0;
- (unsigned long long)pushType;
- (unsigned long long)messageID;
- (void)setPushType:(unsigned long long)a0;
- (void)setChannelID:(id)a0;
- (id)sendInterfaceIdentifier;
- (void)setPriority:(long long)a0;
- (id)originator;
- (void)setMessageID:(unsigned long long)a0;
- (id)eagernessTimeoutTime;
- (BOOL)hasTimedOut;
- (void)setSentTimestamp:(id)a0;
- (id)sentTimestamp;
- (id)timestamp;
- (unsigned long long)_effectiveSendTimeout;
- (void)setOriginator:(id)a0;
- (void)setSendInterfaceIdentifier:(id)a0;
- (id)rawTimeoutTime;
- (id)sendTimeoutTime;

@end
