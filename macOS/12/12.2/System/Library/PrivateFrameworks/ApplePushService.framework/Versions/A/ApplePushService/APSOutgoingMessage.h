@class NSString;

@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (copy, nonatomic) NSString *senderTokenName;
@property (nonatomic) BOOL sendRetried;
@property (nonatomic) BOOL ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (id)timestamp;
- (void)setPriority:(long long)a0;
- (long long)priority;
- (void)setCancelled:(BOOL)a0;
- (void)setTimestamp:(id)a0;
- (BOOL)wasCancelled;
- (unsigned long long)messageID;
- (void)setMessageID:(unsigned long long)a0;
- (id)channelID;
- (void)setChannelID:(id)a0;
- (unsigned long long)pushType;
- (void)setPushType:(unsigned long long)a0;
- (void)setPushFlags:(unsigned int)a0;
- (unsigned int)pushFlags;
- (id)eagernessTimeoutTime;
- (BOOL)isEager;
- (unsigned long long)_effectiveSendTimeout;
- (id)sendTimeoutTime;
- (id)rawTimeoutTime;
- (BOOL)wasSent;
- (void)setSent:(BOOL)a0;
- (long long)sendInterface;
- (void)setSendInterface:(long long)a0;
- (BOOL)hasTimedOut;
- (void)setTimedOut:(BOOL)a0;
- (void)setOriginator:(id)a0;
- (id)originator;
- (void)setSentTimestamp:(id)a0;
- (id)sentTimestamp;

@end
