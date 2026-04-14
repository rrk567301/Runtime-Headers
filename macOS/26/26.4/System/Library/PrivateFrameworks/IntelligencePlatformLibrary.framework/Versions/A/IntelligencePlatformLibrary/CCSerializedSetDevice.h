@class NSString, NSUUID, NSData;

@interface CCSerializedSetDevice : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    NSData *_raw_deviceUUID;
}

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly, nonatomic) NSString *idsDeviceIdentifier;
@property (readonly, nonatomic) NSString *platformString;
@property (readonly, nonatomic) unsigned int options;
@property (nonatomic) BOOL hasOptions;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)deviceUUID;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithDeviceUUID:(id)a0 idsDeviceIdentifier:(id)a1 platformString:(id)a2 options:(id)a3 error:(id *)a4;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithDeviceIdentifier:(id)a0 options:(id)a1 error:(id *)a2;

@end
