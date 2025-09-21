@class NSString, NSArray, NSCalendarDate;

@interface ISDSyncState : ISDDataObject <NSCopying, NSCoding> {
    NSString *_entityName;
    NSArray *_propertyNames;
    NSCalendarDate *_lastSyncDate;
    int _lastSyncStatus;
    unsigned int _lastSyncGeneration;
    int _syncMode;
    int _requestedMode;
    char _clientCanPullOnly;
    char _clientCanPushOnly;
    char _enabled;
    char _clientWantsToPullTruth;
    char _shouldRefilter;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)enabled;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(char)a0;
- (id)entityName;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)lastSyncDate;
- (void)setLastSyncDate:(id)a0;
- (void)setSyncMode:(int)a0;
- (int)syncMode;
- (id)propertyNames;
- (char)_isSupportedEntity;
- (char)clientCanPullOnly;
- (char)clientCanPushOnly;
- (char)clientWantsToPullTruth;
- (id)fastEntityName;
- (id)fastPropertyNames;
- (id)initWithEntityName:(id)a0 propertyNames:(id)a1;
- (unsigned int)lastSyncGeneration;
- (int)lastSyncStatus;
- (int)requestedSyncMode;
- (void)setClientCanPullOnly:(char)a0;
- (void)setClientCanPushOnly:(char)a0;
- (void)setClientWantsToPullTruth:(char)a0;
- (void)setLastSyncGeneration:(unsigned int)a0;
- (void)setLastSyncStatus:(int)a0;
- (void)setPropertyNames:(id)a0;
- (void)setRequestedSyncMode:(int)a0;
- (void)setShouldRefilter:(char)a0;
- (char)shouldRefilter;

@end
