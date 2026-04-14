@class NSString, CALAddress, NSManagedObjectID;

@interface CalExchangeCalendarSource : CalRemoteCalendarSource {
    BOOL _isEditable;
}

@property (retain) NSString *host;
@property (retain) NSManagedObjectID *sessionID;
@property (retain) CALAddress *meForSource;
@property BOOL isDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (BOOL)hasCapability:(int)a0;
- (id)freeBusyCache;
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)a0;
- (BOOL)isSourceInSameAccount:(id)a0;
- (BOOL)isExchange;

@end
