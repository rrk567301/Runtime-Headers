@class NSString, NSArray, NSCalendarDate;

@interface ISDSyncState : ISDDataObject <NSCopying, NSCoding> {
    NSString *_entityName;
    NSArray *_propertyNames;
    NSCalendarDate *_lastSyncDate;
    int _lastSyncStatus;
    unsigned int _lastSyncGeneration;
    int _syncMode;
    int _requestedMode;
    BOOL _clientCanPullOnly;
    BOOL _clientCanPushOnly;
    BOOL _enabled;
    BOOL _clientWantsToPullTruth;
    BOOL _shouldRefilter;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)entityName;
- (id)lastSyncDate;
- (void)setLastSyncDate:(id)a0;
- (id)propertyNames;
- (int)lastSyncStatus;
- (unsigned int)lastSyncGeneration;
- (int)syncMode;
- (BOOL)clientCanPullOnly;
- (BOOL)clientCanPushOnly;
- (BOOL)clientWantsToPullTruth;
- (BOOL)shouldRefilter;
- (id)initWithEntityName:(id)a0 propertyNames:(id)a1;
- (void)setLastSyncStatus:(int)a0;
- (void)setLastSyncGeneration:(unsigned int)a0;
- (void)setSyncMode:(int)a0;
- (void)setClientCanPullOnly:(BOOL)a0;
- (void)setClientCanPushOnly:(BOOL)a0;
- (void)setClientWantsToPullTruth:(BOOL)a0;
- (void)setShouldRefilter:(BOOL)a0;
- (int)requestedSyncMode;
- (BOOL)_isSupportedEntity;
- (void)setPropertyNames:(id)a0;
- (id)fastEntityName;
- (id)fastPropertyNames;
- (void)setRequestedSyncMode:(int)a0;

@end
