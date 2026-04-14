@class NSString;

@interface EDPersistedAttachmentID : NSObject <NSCopying> {
    void /* function */ stringValue;
}

@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDatabaseID:(long long)a0;

@end
