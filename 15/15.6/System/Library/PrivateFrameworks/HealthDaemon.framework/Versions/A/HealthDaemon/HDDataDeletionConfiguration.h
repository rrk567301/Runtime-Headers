@class NSString;

@interface HDDataDeletionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char generateDeletedObjects;
@property (nonatomic) char failIfNotFound;
@property (nonatomic) char notifyObservers;
@property (nonatomic) char secureDelete;
@property (nonatomic) char preserveExactStartAndEndDates;
@property (nonatomic) char userRequested;
@property (copy, nonatomic) id /* block */ recursiveDeleteAuthorizationBlock;
@property (copy, nonatomic) NSString *restrictedSourceBundleIdentifier;
@property (copy, nonatomic) Class entityClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
