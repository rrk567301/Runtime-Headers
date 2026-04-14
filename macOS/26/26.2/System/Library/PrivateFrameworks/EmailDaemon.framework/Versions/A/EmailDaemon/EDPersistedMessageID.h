@class NSString;

@interface EDPersistedMessageID : NSObject <NSCopying> {
    void /* function */ stringValue;
}

@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDatabaseID:(long long)a0;

@end
