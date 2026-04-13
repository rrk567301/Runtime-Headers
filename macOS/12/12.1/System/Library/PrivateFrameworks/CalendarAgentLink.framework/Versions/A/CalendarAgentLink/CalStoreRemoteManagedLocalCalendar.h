@interface CalStoreRemoteManagedLocalCalendar : CalStoreRemoteManagedCalendar

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)a0;

- (BOOL)isLocal;

@end
