@class STListDataDiff, NSString;

@interface STActivityAttributionListDiff : NSObject <STStatusDomainDataDiff, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STListDataDiff *listDataDiff;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromList:(id)a0 toList:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)diffByApplyingDiff:(id)a0;
- (void)applyToMutableList:(id)a0;
- (id)initWithListDataDiff:(id)a0;
- (id)listByApplyingToList:(id)a0;

@end
