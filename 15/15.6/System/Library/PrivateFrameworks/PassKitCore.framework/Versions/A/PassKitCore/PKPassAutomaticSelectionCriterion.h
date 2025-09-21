@class NSString, NSSet, NSData;

@interface PKPassAutomaticSelectionCriterion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long technologyType;
@property (nonatomic) BOOL supportsExpress;
@property (copy, nonatomic) NSSet *primaryTCIs;
@property (copy, nonatomic) NSSet *TCIs;
@property (nonatomic) BOOL supportsInSessionExpress;
@property (copy, nonatomic) NSSet *readerIDs;
@property (copy, nonatomic) NSSet *associatedReaderIDs;
@property (copy, nonatomic) NSData *mask;

+ (id)criterionForExpressMode:(id)a0;
+ (id)expressModeForCriterion:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;

@end
