@class NSString, LoggingContextSet;

@interface ContextWhitelistFilterLogFormatter : NSObject <DDLogFormatter> {
    LoggingContextSet *contextSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)whitelist;
- (id)formatLogMessage:(id)a0;
- (void)addToWhitelist:(int)a0;
- (char)isOnWhitelist:(int)a0;
- (void)removeFromWhitelist:(int)a0;

@end
