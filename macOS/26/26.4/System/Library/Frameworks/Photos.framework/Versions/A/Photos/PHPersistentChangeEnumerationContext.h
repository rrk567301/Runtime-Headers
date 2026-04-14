@class NSMutableSet;

@interface PHPersistentChangeEnumerationContext : NSObject

@property (readonly, nonatomic) NSMutableSet *untrashedIdentifiersAsInserts;
@property (readonly, nonatomic) NSMutableSet *trashedIdentifiersAsDeletes;

- (void).cxx_destruct;
- (id)init;

@end
