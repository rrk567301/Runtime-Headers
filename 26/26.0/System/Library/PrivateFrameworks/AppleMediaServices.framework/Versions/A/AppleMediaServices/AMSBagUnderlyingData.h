@class NSString, NSDictionary, NSSet, NSDate;

@interface AMSBagUnderlyingData : NSObject {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ expirationDate;
    void /* function */ fileKey;
    void /* function */ aliasKeys;
}

@property (nonatomic, readonly) NSDictionary *bagDictionary;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *fileKey;
@property (nonatomic, readonly) NSSet *aliasKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileKey:(id)a0 aliasKeys:(id)a1 bagDictionary:(id)a2 expirationDate:(id)a3;

@end
