@class NSSet, NSDictionary, NSMutableDictionary;

@interface UNCThreadsMuteAssertion : UNCMuteAssertion {
    NSMutableDictionary *_mutableExpirationDateByThreadID;
}

@property (readonly, copy, nonatomic) NSSet *threadIDs;
@property (readonly, copy, nonatomic) NSDictionary *expirationDateByThreadID;

+ (BOOL)supportsSecureCoding;
+ (id)threadsMuteAssertion;
+ (id)threadsMuteAssertionWithExpirationDateByThreadID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithExpirationDateByThreadID:(id)a0;
- (void)getNextExpirationDate:(id *)a0 wasPurged:(BOOL *)a1;
- (BOOL)isActiveForThreadIdentifier:(id)a0;
- (void)setMutedUntilDate:(id)a0 forThreadIdentifier:(id)a1;
- (void)setUnmutedForThreadIdentifier:(id)a0;

@end
