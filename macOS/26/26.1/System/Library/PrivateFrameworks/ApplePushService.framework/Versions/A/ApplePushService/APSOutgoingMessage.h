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
- (id)originator;
- (void)setTimedOut:(BOOL)a0;
- (void)setChannelID:(id)a0;
- (void)setOriginator:(id)a0;
- (unsigned long long)pushType;
- (unsigned int)pushFlags;
- (void)setPushType:(unsigned long long)a0;
- (id)channelID;
- (id)eagernessTimeoutTime;
- (void)setSent:(BOOL)a0;
- (long long)priority;
- (id)sentTimestamp;
- (BOOL)wasSent;
- (void)setPriority:(long long)a0;
- (void)setTimestamp:(id)a0;
- (BOOL)isEager;
- (void)setMessageID:(unsigned long long)a0;
- (void)setPushFlags:(unsigned int)a0;
- (id)sendInterfaceIdentifier;
- (void)setSendInterfaceIdentifier:(id)a0;
- (id)rawTimeoutTime;
- (void)setSentTimestamp:(id)a0;
- (unsigned long long)_effectiveSendTimeout;
- (id)timestamp;
- (unsigned long long)messageID;
- (BOOL)hasTimedOut;
- (id)sendTimeoutTime;

@end
