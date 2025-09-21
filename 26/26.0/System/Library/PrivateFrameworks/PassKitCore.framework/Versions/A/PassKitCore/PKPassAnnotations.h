@class NSDate;

@interface PKPassAnnotations : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long sortingState;
@property (retain, nonatomic) NSDate *archivedTimestamp;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isArchived;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSortingState:(long long)a0;
- (BOOL)isIntendedForExpiredSection;
- (void)updateSortingState:(long long)a0;

@end
