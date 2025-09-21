@class NSSet, NSDateInterval, NSDictionary, NSNumber;

@interface HDSyncPredicate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *excludedSyncProvenances;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) char shouldIncludeDatelessObjects;
@property (readonly, copy, nonatomic) NSSet *includedObjectTypes;
@property (readonly, copy, nonatomic) NSNumber *defaultMaximumObjectAge;
@property (readonly, copy, nonatomic) NSNumber *defaultMaximumTombstoneAge;
@property (readonly, copy, nonatomic) NSDictionary *maximumObjectAgeByType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExcludedSyncProvenances:(id)a0 dateInterval:(id)a1 shouldIncludeDatelessObjects:(char)a2 includedObjectTypes:(id)a3 defaultMaximumObjectAge:(id)a4 defaultMaximumTombstoneAge:(id)a5 maximumObjectAgeByType:(id)a6;
- (id)maximumObjectAgeForType:(id)a0;

@end
