@class NSString, NSAppleEventDescriptor, AEScriptableEntity;

@interface AEObject : NSObject

@property (retain) NSString *className;
@property (retain) AEScriptableEntity *scriptableEntity;
@property (retain) NSAppleEventDescriptor *specifier;
@property unsigned int classCode;
@property (retain) AEObject *container;

+ (id)objectWithSpecifier:(id)a0 classCode:(unsigned int)a1 container:(id)a2 scriptableEntity:(id)a3;
+ (id)applicationObjectWithApplication:(id)a0;
+ (id)libraryObjectWithLibrary:(id)a0;

- (void).cxx_destruct;
- (id)qualifiedDescriptor;
- (id)initWithSpecifier:(id)a0 classCode:(unsigned int)a1 container:(id)a2 scriptableEntity:(id)a3 topLevelObject:(BOOL)a4;
- (id)specifierChain;
- (id)containmentRecord;
- (BOOL)isApplicationObject;

@end
