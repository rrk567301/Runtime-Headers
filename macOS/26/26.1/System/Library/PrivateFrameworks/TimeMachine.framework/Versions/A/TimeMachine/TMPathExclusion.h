@class NSString;

@interface TMPathExclusion : NSObject

@property (readonly) unsigned char type;
@property (readonly) NSString *standardizedPath;
@property (readonly) NSString *destinationUUID;
@property (readonly) BOOL appManaged;
@property (readonly) BOOL userManagedGlobal;
@property (readonly) BOOL userManagedPerDestination;

+ (id)appManagedExclusionWithPath:(id)a0;
+ (id)userManagedExclusionWithPath:(id)a0;
+ (id)userManagedExclusionWithPath:(id)a0 destinationUUID:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPath:(id)a0 type:(unsigned char)a1 destinationUUID:(id)a2;

@end
