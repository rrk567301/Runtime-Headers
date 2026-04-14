@class NSError;

@interface CKPackageEnumerator : NSEnumerator

@property (retain, nonatomic) NSError *enumerationError;

- (id)nextObject;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)nextObjectBatch;

@end
