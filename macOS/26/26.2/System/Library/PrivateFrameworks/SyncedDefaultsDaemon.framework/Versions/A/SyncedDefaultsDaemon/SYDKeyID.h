@class NSString;

@interface SYDKeyID : NSObject <NSCopying> {
    void /* function */ key;
    void /* function */ storeIdentifier;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *storeIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithKey:(id)a0 storeIdentifier:(id)a1;

@end
