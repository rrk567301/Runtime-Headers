@class NSString;

@interface SYDKeyID : NSObject <NSCopying> {
    void /* function */ key;
    void /* function */ storeIdentifier;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *storeIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 storeIdentifier:(id)a1;

@end
