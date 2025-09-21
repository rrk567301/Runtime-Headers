@class NSError;

@interface CKPackageEnumerator : NSEnumerator

@property (retain, nonatomic) NSError *enumerationError;

- (id)initWithError:(id)a0;
- (id)nextObject;
- (void).cxx_destruct;
- (id)nextObjectBatch;

@end
