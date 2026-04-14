@interface SYNotesActivationCommand : NSObject

+ (void)activateWithMetaActivity:(id)a0 completion:(id /* block */)a1;
+ (void)_activateWithMetaActivity:(id)a0 completion:(id /* block */)a1;
+ (void)activateWithDomainIdentifier:(id)a0 noteIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)_activateWithDomainIdentifier:(id)a0 noteIdentifier:(id)a1 completion:(id /* block */)a2;
+ (id)_generateOpenAppEventWithTarget:(id)a0;
+ (id)_generateOpenNoteEventWithTarget:(id)a0 URLString:(id)a1;
+ (void)activateWithNoteIdentifier:(id)a0 completion:(id /* block */)a1;

@end
