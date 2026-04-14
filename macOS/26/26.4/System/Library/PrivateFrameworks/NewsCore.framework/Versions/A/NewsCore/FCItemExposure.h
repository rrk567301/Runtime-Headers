@class NSString, NSDate;

@interface FCItemExposure : NSObject {
    void /* function */ itemID;
    void /* function */ clusterID;
    void /* unknown type, empty encoding */ firstExposedAt;
    void /* unknown type, empty encoding */ lastExposedAt;
    void /* unknown type, empty encoding */ maxExposedVersionFirstExposedAt;
}

@property (nonatomic, readonly) NSString *itemID;
@property (nonatomic, readonly) NSString *clusterID;
@property (nonatomic, readonly) NSDate *firstExposedAt;
@property (nonatomic, readonly) NSDate *lastExposedAt;
@property (nonatomic, readonly) long long maxExposedVersion;
@property (nonatomic, readonly) NSDate *maxExposedVersionFirstExposedAt;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithItemID:(id)a0 clusterID:(id)a1 exposedAt:(id)a2 version:(long long)a3;
- (id)initWithItemID:(id)a0 clusterID:(id)a1 firstExposedAt:(id)a2 lastExposedAt:(id)a3 maxExposedVersion:(long long)a4 maxExposedVersionFirstExposedAt:(id)a5;
- (id)initWithItemID:(id)a0 exposedAt:(id)a1 version:(long long)a2;

@end
