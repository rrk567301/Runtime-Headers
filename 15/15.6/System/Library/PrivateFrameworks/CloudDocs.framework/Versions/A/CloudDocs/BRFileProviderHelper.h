@interface BRFileProviderHelper : NSObject

+ (id)br_getProviderDomainIDForDataSeparated:(char)a0;
+ (id)_br_getDomainIdentifierForAccountDescriptor:(id)a0;
+ (id)br_getDomainIdentifierForACAccountID:(id)a0;
+ (id)br_getDomainIdentifierForCurrentPersona;
+ (id)br_getDomainIdentifierForDataSeparated:(char)a0;
+ (id)br_getProviderDomainIDForCurrentPersona;
+ (id)br_getProviderDomainIDForDomainIdentifier:(id)a0 dataSeparated:(char)a1;
+ (id)br_getProviderIDForCurrentPersona;
+ (id)br_getProviderIDForDataSeparated:(char)a0;

@end
