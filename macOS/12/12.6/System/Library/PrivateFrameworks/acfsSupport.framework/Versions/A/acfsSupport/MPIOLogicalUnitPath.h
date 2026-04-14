@class MPIOLogicalUnit, NSString, NSData;

@interface MPIOLogicalUnitPath : NSObject {
    struct __CFBoolean { } *pathEnabled;
}

@property (readonly) unsigned long long serviceEntryID;
@property (readonly) unsigned long long matchingLogicalUnitEntryID;
@property MPIOLogicalUnit *matchingLogicalUnit;
@property (copy) NSString *pathID;
@property (copy) NSString *pathState;
@property (copy) NSString *interconnectType;
@property (readonly, copy) NSString *productID;
@property (readonly, copy) NSString *vendorID;
@property (copy) NSData *scsiInitiatorPortIdentifier;

+ (id)logicalUnitPathIdentifierFromPropertiesDict:(id)a0;
+ (id)propertiesForEntryID:(unsigned long long)a0;
+ (unsigned long long)getTypeID;

- (void)dealloc;
- (unsigned long long)_cfTypeID;
- (id)getProperties;
- (BOOL)enable:(id *)a0;
- (BOOL)disable:(id *)a0;
- (BOOL)isEnabled:(id *)a0;
- (BOOL)grabPathStatsBuffer:(unsigned long long)a0 intoResults:(struct SCSIPathStatistics { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned char x3; } *)a1 withError:(id *)a2;
- (unsigned long long)locateLogicalUnitID;
- (void)rebuildPropertiesFromEntry;
- (id)getCurrentStatistics;
- (id)initWithIOKitServiceEntry:(unsigned long long)a0 matchingLUN:(id)a1;

@end
