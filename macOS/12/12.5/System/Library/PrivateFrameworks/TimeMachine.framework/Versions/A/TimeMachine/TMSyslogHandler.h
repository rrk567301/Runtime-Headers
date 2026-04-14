@interface TMSyslogHandler : TMLoggingHandler

@property int facility;

- (void)handleMessage:(id)a0 forRecord:(id)a1;
- (int)_syslogLevelForRecord:(id)a0;

@end
