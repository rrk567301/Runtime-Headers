@class NSArray;

@interface MFIMAPStoreFlagsOperation : MFIMAPStoreOperation

@property (readonly, copy, nonatomic) NSArray *flagsToSet;
@property (readonly, copy, nonatomic) NSArray *flagsToClear;

- (unsigned char)operationType;
- (id)description;
- (id)initWithFlagsToSet:(id)a0 flagsToClear:(id)a1 forUIDs:(id)a2 inMailbox:(id)a3;

@end
