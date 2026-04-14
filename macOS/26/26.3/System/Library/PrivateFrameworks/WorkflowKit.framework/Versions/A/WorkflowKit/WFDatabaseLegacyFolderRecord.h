@class NSString, NSData;

@interface WFDatabaseLegacyFolderRecord : NSObject {
    void /* function */ name;
    void /* function */ cloudKitMetadata;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned short icon;
@property (nonatomic, readonly) long long encryptedSchemaVersion;
@property (nonatomic, readonly) NSData *cloudKitMetadata;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 icon:(unsigned short)a1 encryptedSchemaVersion:(long long)a2 cloudKitMetadata:(id)a3;

@end
