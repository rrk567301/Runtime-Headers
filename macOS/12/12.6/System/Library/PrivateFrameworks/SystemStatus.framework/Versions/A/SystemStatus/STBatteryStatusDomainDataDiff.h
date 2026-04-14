@class NSString, BSSettings;

@interface STBatteryStatusDomainDataDiff : NSObject <STStatusDomainDataDiff>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BSSettings *changes;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromData:(id)a0 toData:(id)a1;
+ (void)_resolveCombinedChanges:(id)a0 forObjectEntry:(unsigned long long)a1 baseChanges:(id)a2;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithChanges:(id)a0;
- (void)applyToMutableData:(id)a0;
- (id)diffByApplyingDiff:(id)a0;
- (id)dataByApplyingToData:(id)a0;

@end
