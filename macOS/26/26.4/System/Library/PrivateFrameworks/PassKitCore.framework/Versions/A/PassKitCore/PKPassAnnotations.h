@class NSDate;

@interface PKPassAnnotations : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long sortingState;
@property (retain, nonatomic) NSDate *archivedTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isArchived;
- (id)initWithSortingState:(long long)a0;
- (BOOL)isIntendedForExpiredSection;
- (void)updateSortingState:(long long)a0;

@end
