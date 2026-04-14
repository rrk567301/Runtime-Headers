@class NSString;

@interface TMPathExclusion : NSObject

@property (copy) NSString *path;
@property (copy) NSString *storedPath;
@property unsigned char type;
@property (readonly) NSString *destinationUUID;
@property (readonly) BOOL appManaged;
@property (readonly) BOOL userManagedGlobal;
@property (readonly) BOOL userManagedPerDestination;

+ (id)appManagedExclusionWithPath:(id)a0;
+ (id)appManagedExclusionWithStoredPath:(id)a0;
+ (id)userManagedExclusionWithPath:(id)a0;
+ (id)userManagedExclusionWithPath:(id)a0 destinationUUID:(id)a1;
+ (id)userManagedExclusionWithStoredPath:(id)a0;
+ (id)userManagedExclusionWithStoredPath:(id)a0 destinationUUID:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithPath:(id)a0 type:(unsigned char)a1 destinationUUID:(id)a2;
- (id)_initWithStoredPath:(id)a0 type:(unsigned char)a1 destinationUUID:(id)a2;

@end
