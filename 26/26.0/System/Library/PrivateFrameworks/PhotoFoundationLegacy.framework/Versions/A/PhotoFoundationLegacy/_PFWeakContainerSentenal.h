@class PFWeakContainer;

@interface _PFWeakContainerSentenal : NSObject {
    PFWeakContainer *_container;
}

+ (void)initialize;

- (id)initWithContainer:(id)a0;
- (void)dealloc;
- (oneway void)release;
- (void)clearContainer;
- (void)associateWithObject:(id)a0;
- (BOOL)isAssociatedWithObject:(id)a0;
- (void)removeAssociationWithObject:(id)a0;

@end
