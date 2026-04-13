@class NSString, CalManagedCalDAVPrincipal;

@interface CalManagedSearchProperty : CalManagedObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *namespace;
@property (retain, nonatomic) CalManagedCalDAVPrincipal *principal;
@property (readonly, retain, nonatomic) NSString *CDVStringWithNameSpace;

+ (id)entityName;

@end
