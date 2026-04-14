@class PFWeakContainer;

@interface _PFWeakContainerSentenal : NSObject {
    PFWeakContainer *_container;
}

+ (void)initialize;

- (id)initWithContainer:(id)a0;
- (oneway void)release;
- (void)dealloc;
- (void)clearContainer;
- (void)associateWithObject:(id)a0;
- (BOOL)isAssociatedWithObject:(id)a0;
- (void)removeAssociationWithObject:(id)a0;

@end
