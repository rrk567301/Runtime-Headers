@class NSString, NSMutableSet, MPPropertySet;

@interface _MPServerObjectDatabaseProgressiveContext : NSObject <MPObjectDatabaseProgressiveContext, MPServerObjectDatabaseObserver> {
    NSMutableSet *_identifiers;
    id /* block */ _onInvalidate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalid;
    MPPropertySet *_propertySet;
}

@property (nonatomic) unsigned int tag;
@property (readonly, nonatomic) BOOL isInvalid;
@property (copy, nonatomic) id /* block */ onInvalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)database:(id)a0 didFinishImportRequest:(id)a1 result:(id)a2;

@end
