@class NSString;

@interface SGSchemaOrgKey : NSObject <SGEntityKey> {
    NSString *_uuid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSupportedEntityType:(long long)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithSerialized:(id)a0;
- (char)isEqualToSchemaOrgKey:(id)a0;

@end
