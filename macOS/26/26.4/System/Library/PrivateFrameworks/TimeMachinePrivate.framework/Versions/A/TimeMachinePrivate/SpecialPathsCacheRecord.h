@class NSString, NSDictionary;

@interface SpecialPathsCacheRecord : NSObject

@property (readonly, copy) NSString *volumeUUID;
@property (readonly, copy) NSString *relativePath;
@property (readonly) unsigned long long fileID;
@property (readonly) unsigned long long recordType;
@property (readonly) NSDictionary *dictionaryRepresentation;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0 volumeUUID:(id)a1 error:(id *)a2;
- (id)initWithType:(unsigned long long)a0 volumeUUID:(id)a1 relativePath:(id)a2 fileID:(unsigned long long)a3;

@end
