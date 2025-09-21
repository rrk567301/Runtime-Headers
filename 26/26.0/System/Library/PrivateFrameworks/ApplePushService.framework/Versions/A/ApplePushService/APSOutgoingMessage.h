@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) BOOL sendRetried;
@property (nonatomic) BOOL ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (id)channelID;
- (void)setChannelID:(id)a0;
- (void)setCancelled:(BOOL)a0;
- (id)eagernessTimeoutTime;
- (unsigned long long)pushType;
- (void)setSent:(BOOL)a0;
- (BOOL)isEager;
- (id)originator;
- (id)timestamp;
- (void)setPushType:(unsigned long long)a0;
- (void)setPriority:(long long)a0;
- (void)setTimestamp:(id)a0;
- (BOOL)hasTimedOut;
- (void)setMessageID:(unsigned long long)a0;
- (long long)priority;
- (unsigned long long)_effectiveSendTimeout;
- (id)sendTimeoutTime;
- (void)setOriginator:(id)a0;
- (BOOL)wasSent;
- (id)rawTimeoutTime;
- (BOOL)wasCancelled;
- (unsigned int)pushFlags;
- (id)sentTimestamp;
- (void)setSentTimestamp:(id)a0;
- (void)setTimedOut:(BOOL)a0;
- (void)setPushFlags:(unsigned int)a0;
- (unsigned long long)messageID;
- (id)sendInterfaceIdentifier;
- (void)setSendInterfaceIdentifier:(id)a0;

@end
