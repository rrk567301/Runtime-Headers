@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) BOOL sendRetried;
@property (nonatomic) BOOL ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (void)setCancelled:(BOOL)a0;
- (BOOL)wasCancelled;
- (id)eagernessTimeoutTime;
- (unsigned long long)pushType;
- (void)setChannelID:(id)a0;
- (void)setPushType:(unsigned long long)a0;
- (id)channelID;
- (id)sentTimestamp;
- (BOOL)wasSent;
- (id)timestamp;
- (void)setOriginator:(id)a0;
- (unsigned int)pushFlags;
- (void)setPriority:(long long)a0;
- (long long)priority;
- (id)sendTimeoutTime;
- (unsigned long long)messageID;
- (BOOL)isEager;
- (void)setSendInterfaceIdentifier:(id)a0;
- (void)setTimedOut:(BOOL)a0;
- (void)setPushFlags:(unsigned int)a0;
- (id)originator;
- (void)setSent:(BOOL)a0;
- (id)rawTimeoutTime;
- (BOOL)hasTimedOut;
- (id)sendInterfaceIdentifier;
- (void)setSentTimestamp:(id)a0;
- (void)setMessageID:(unsigned long long)a0;
- (void)setTimestamp:(id)a0;
- (unsigned long long)_effectiveSendTimeout;

@end
