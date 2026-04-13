@class NSArray;

@interface CalStoreRemoteManagedGroup : CalStoreRemoteManagedNode

@property (readonly, nonatomic) NSArray *calendars;

+ (BOOL)supportsSecureCoding;

- (long long)compare:(id)a0;
- (id)saveWithError:(id *)a0;
- (BOOL)removeWithError:(id *)a0;

@end
