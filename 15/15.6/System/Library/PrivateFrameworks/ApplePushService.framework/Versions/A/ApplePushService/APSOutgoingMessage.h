@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) char critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) char sendRetried;
@property (nonatomic) char ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (id)timestamp;
- (long long)priority;
- (void)setTimestamp:(id)a0;
- (void)setCancelled:(char)a0;
- (void)setPriority:(long long)a0;
- (char)wasCancelled;
- (char)isEager;
- (id)sendTimeoutTime;
- (char)wasSent;
- (unsigned long long)_effectiveSendTimeout;
- (id)channelID;
- (id)eagernessTimeoutTime;
- (char)hasTimedOut;
- (unsigned long long)messageID;
- (id)originator;
- (unsigned int)pushFlags;
- (unsigned long long)pushType;
- (id)rawTimeoutTime;
- (id)sendInterfaceIdentifier;
- (id)sentTimestamp;
- (void)setChannelID:(id)a0;
- (void)setMessageID:(unsigned long long)a0;
- (void)setOriginator:(id)a0;
- (void)setPushFlags:(unsigned int)a0;
- (void)setPushType:(unsigned long long)a0;
- (void)setSendInterfaceIdentifier:(id)a0;
- (void)setSent:(char)a0;
- (void)setSentTimestamp:(id)a0;
- (void)setTimedOut:(char)a0;

@end
