@class CCDatabaseEnumerationResult;

@interface CCDatabaseValueRowEnumerator : NSObject

@property (readonly, nonatomic) CCDatabaseEnumerationResult *enumerationResult;

- (void).cxx_destruct;
- (id)error;
- (id)next;
- (id)peek;
- (id)initWithEnumerationResult:(id)a0;

@end
