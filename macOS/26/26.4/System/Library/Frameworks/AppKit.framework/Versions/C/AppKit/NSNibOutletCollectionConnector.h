@class NSString;

@interface NSNibOutletCollectionConnector : NSNibConnector

@property (copy) NSString *runtimeCollectionClassName;
@property BOOL addsContentToExistingCollection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;

@end
