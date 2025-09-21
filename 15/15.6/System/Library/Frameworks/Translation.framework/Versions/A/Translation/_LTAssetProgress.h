@class NSString, NSMutableDictionary;

@interface _LTAssetProgress : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _totalUnitCount;
    long long _completedUnitCount;
    NSMutableDictionary *_components;
    NSString *_identifierPrefix;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long totalUnitCount;
@property (readonly, nonatomic) long long completedUnitCount;
@property (readonly, nonatomic) double fractionCompleted;
@property (readonly, nonatomic) char isFinished;
@property (readonly, nonatomic) char isCancelled;
@property (readonly, nonatomic) char hasComponents;
@property (nonatomic) long long offlineState;
@property (copy, nonatomic) NSString *componentFilter;

+ (id)discreteProgressWithIdentifier:(id)a0 offlineState:(long long)a1;
+ (id)discreteProgressWithIdentifier:(id)a0 totalUnitCount:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancel;
- (char)addComponent:(id)a0;
- (char)removeComponent:(id)a0;
- (void)removeAllComponents;
- (void)_fastReadTotal:(long long *)a0 completed:(long long *)a1;
- (id)identifierPrefix;
- (id)initWithIdentifier:(id)a0 offlineState:(long long)a1;
- (id)initWithIdentifier:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2;
- (void)setGreaterThanOrEqualToOfflineState:(long long)a0;
- (char)updatePercentComplete:(double)a0;
- (char)updateTotalUnitCount:(long long)a0 completedUnitCount:(long long)a1;

@end
