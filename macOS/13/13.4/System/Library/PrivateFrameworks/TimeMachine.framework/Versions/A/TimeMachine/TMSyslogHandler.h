@interface TMSyslogHandler : TMLoggingHandler

@property int facility;

- (int)_syslogLevelForRecord:(id)a0;
- (void)handleMessage:(id)a0 forRecord:(id)a1;

@end
