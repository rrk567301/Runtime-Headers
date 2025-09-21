@class NSString, NSNumber;

@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord <NSCopying>

@property (copy, nonatomic) NSString *transactionID;
@property (copy, nonatomic) NSNumber *transactionType;
@property (copy, nonatomic) NSNumber *sectorCombination;
@property (copy, nonatomic) NSNumber *amountType;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
