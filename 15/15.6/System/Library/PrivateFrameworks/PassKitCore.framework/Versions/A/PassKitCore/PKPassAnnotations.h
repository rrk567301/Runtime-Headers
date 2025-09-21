@class NSDate;

@interface PKPassAnnotations : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long sortingState;
@property (retain, nonatomic) NSDate *archivedTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isArchived;
- (id)initWithSortingState:(long long)a0;
- (char)isIntendedForExpiredSection;
- (void)updateSortingState:(long long)a0;

@end
