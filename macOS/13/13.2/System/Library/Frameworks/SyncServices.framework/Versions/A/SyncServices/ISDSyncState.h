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

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)entityName;
- (id)lastSyncDate;
- (void)setLastSyncDate:(id)a0;
- (int)syncMode;
- (void)setSyncMode:(int)a0;
- (id)propertyNames;
- (unsigned int)lastSyncGeneration;
- (id)fastEntityName;
- (id)initWithEntityName:(id)a0 propertyNames:(id)a1;
- (void)setPropertyNames:(id)a0;
- (int)lastSyncStatus;
- (void)setLastSyncStatus:(int)a0;
- (void)setLastSyncGeneration:(unsigned int)a0;
- (BOOL)_isSupportedEntity;
- (BOOL)clientCanPullOnly;
- (void)setClientCanPullOnly:(BOOL)a0;
- (BOOL)clientCanPushOnly;
- (void)setClientCanPushOnly:(BOOL)a0;
- (BOOL)clientWantsToPullTruth;
- (void)setClientWantsToPullTruth:(BOOL)a0;
- (BOOL)shouldRefilter;
- (void)setShouldRefilter:(BOOL)a0;
- (int)requestedSyncMode;
- (void)setRequestedSyncMode:(int)a0;
- (id)fastPropertyNames;

@end
