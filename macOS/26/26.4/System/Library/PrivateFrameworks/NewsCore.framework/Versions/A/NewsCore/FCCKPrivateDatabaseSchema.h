@class NSDictionary, FCCKPrivateDatabaseVersionMapping, NSArray;

@interface FCCKPrivateDatabaseSchema : NSObject {
    FCCKPrivateDatabaseVersionMapping *_zoneNameVersionMapping;
    FCCKPrivateDatabaseVersionMapping *_recordTypeVersionMapping;
    FCCKPrivateDatabaseVersionMapping *_recordNameVersionMapping;
    NSDictionary *_zoneSchemasByName;
    NSArray *_defaultZoneSchemas;
    NSDictionary *_recordSchemasByType;
}

- (void).cxx_destruct;
- (id)init;

@end
