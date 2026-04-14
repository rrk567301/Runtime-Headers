@class NSError;

@interface CKPackageEnumerator : NSEnumerator

@property (retain, nonatomic) NSError *enumerationError;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)nextObject;
- (id)nextObjectBatch;

@end
