@class NSString, LoggingContextSet;

@interface ContextBlacklistFilterLogFormatter : NSObject <DDLogFormatter> {
    LoggingContextSet *contextSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)blacklist;
- (id)init;
- (id)formatLogMessage:(id)a0;
- (void)addToBlacklist:(int)a0;
- (BOOL)isOnBlacklist:(int)a0;
- (void)removeFromBlacklist:(int)a0;

@end
