@class NSString, NSData;

@interface MISOnlineAuthEntry : NSObject <NSCopying>

@property (copy, nonatomic) NSString *profileUUID;
@property (copy, nonatomic) NSData *cdHash;
@property (nonatomic) int gracePeriod;
@property (nonatomic) long long lastSuccessMonotonicTime;
@property (nonatomic) long long lastSuccessResetCount;
@property (nonatomic) BOOL isRejected;
@property (nonatomic) BOOL isRejectedByWholeProfile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)dictionaryDescription;
- (long long)indeterminateTime;
- (id)initWithProfileUUID:(id)a0 cdHash:(id)a1 gracePeriod:(int)a2 lastSuccessMonotonicTime:(long long)a3 lastSuccessResetCount:(long long)a4 isRejected:(BOOL)a5 isRejectedByWholeProfile:(BOOL)a6;
- (BOOL)isIndeterminate:(long long)a0 resetCount:(long long)a1;

@end
