@class NSString, NSDate;

@interface FCItemExposure : NSObject {
    void /* function */ itemID;
    void /* unknown type, empty encoding */ firstExposedAt;
    void /* unknown type, empty encoding */ lastExposedAt;
    void /* unknown type, empty encoding */ maxExposedVersionFirstExposedAt;
}

@property (nonatomic, readonly) NSString *itemID;
@property (nonatomic, readonly) NSDate *firstExposedAt;
@property (nonatomic, readonly) NSDate *lastExposedAt;
@property (nonatomic, readonly) long long maxExposedVersion;
@property (nonatomic, readonly) NSDate *maxExposedVersionFirstExposedAt;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemID:(id)a0 exposedAt:(id)a1 version:(long long)a2;
- (id)initWithItemID:(id)a0 firstExposedAt:(id)a1 lastExposedAt:(id)a2 maxExposedVersion:(long long)a3 maxExposedVersionFirstExposedAt:(id)a4;

@end
