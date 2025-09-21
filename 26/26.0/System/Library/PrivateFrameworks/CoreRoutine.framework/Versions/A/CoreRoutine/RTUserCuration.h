@class NSUUID, RTMapItem, NSDate;

@interface RTUserCuration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *submissionDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSDate *visitEntryDate;
@property (readonly, nonatomic) NSDate *visitExitDate;
@property (readonly, nonatomic) RTMapItem *curatedLabel;
@property (readonly, nonatomic) NSUUID *visitIdentifier;
@property (readonly, nonatomic) RTMapItem *originalLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)abbreviatedDescription;
- (id)initWithIdentifier:(id)a0 submissionDate:(id)a1 expirationDate:(id)a2 entryDate:(id)a3 exitDate:(id)a4 curatedLabel:(id)a5;
- (id)initWithIdentifier:(id)a0 submissionDate:(id)a1 expirationDate:(id)a2 entryDate:(id)a3 exitDate:(id)a4 visitIdentifier:(id)a5 originalLabel:(id)a6 curatedLabel:(id)a7;
- (BOOL)isEqualToUserCuration:(id)a0;

@end
