@class NSString, BSSettings, STListDataDiff;

@interface STLocationStatusDomainDataDiff : NSObject <STStatusDomainDataDiff> {
    BSSettings *_changes;
    STListDataDiff *_locationAttributionListDataDiff;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromData:(id)a0 toData:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)diffByApplyingDiff:(id)a0;
- (id)initWithChanges:(id)a0 locationAttributionListDataDiff:(id)a1;
- (id)dataByApplyingToData:(id)a0;
- (void)applyToMutableData:(id)a0;

@end
