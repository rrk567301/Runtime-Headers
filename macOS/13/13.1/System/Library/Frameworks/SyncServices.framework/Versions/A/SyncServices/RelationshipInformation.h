@class NSString, NSArray, NSMutableDictionary, ISyncConcreteSession;

@interface RelationshipInformation : NSObject {
    NSString *_entityName;
    NSString *_relationship;
    NSArray *_legalTypes;
    NSMutableDictionary *_typeMap;
    ISyncConcreteSession *_session;
    NSMutableDictionary *_modsToCheckPerRecord;
}

- (void)dealloc;
- (id)_entityName;
- (id)_relationshipName;
- (id)initWithName:(id)a0 forEntity:(id)a1 inSession:(id)a2;
- (void)setReferencesToCheck:(id)a0 forRecord:(id)a1;
- (id)_referencesToCheck;
- (void)validateReferences:(id)a0;
- (id)allUnknownReferences;

@end
