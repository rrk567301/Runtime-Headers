@interface DMCKeychain : NSObject

+ (void *)_copyTypeRefWithQuery:(id)a0 useSystemKeychain:(char)a1 enforcePersonalPersona:(char)a2;
+ (id)dataFromString:(id)a0;
+ (struct __CFDictionary { } *)_newQueryWithService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 useSystemKeychain:(char)a5 outError:(id *)a6;
+ (struct __SecCertificate { } *)copyCertificateWithPersistentID:(id)a0 useSystemKeychain:(char)a1 enforcePersonalPersona:(char)a2;
+ (id)copyCertificatesWithPersistentIDs:(id)a0 useSystemKeychain:(char)a1 enforcePersonalPersona:(char)a2;
+ (id)copyDataWithPersistentID:(id)a0 useSystemKeychain:(char)a1 enforcePersonalPersona:(char)a2;
+ (struct __SecIdentity { } *)copyIdentityWithPersistentID:(id)a0 useSystemKeychain:(char)a1 enforcePersonalPersona:(char)a2;
+ (void *)copyItemWithPersistentID:(id)a0 useSystemKeychain:(char)a1 enforcePersonalPersona:(char)a2;
+ (id)copyPasswordWithPersistentID:(id)a0 useSystemKeychain:(char)a1 enforcePersonalPersona:(char)a2;
+ (id)dataFromService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 group:(id)a4 useSystemKeychain:(char)a5 enforcePersonalPersona:(char)a6 outError:(id *)a7;
+ (char)deleteAttestationCertWithGroup:(id)a0 label:(id)a1;
+ (char)deleteAttestationKeyWithGroup:(id)a0 label:(id)a1;
+ (char)deleteAttestationMetadataWithGroup:(id)a0 service:(id)a1;
+ (void)removeItemForService:(id)a0 account:(id)a1 label:(id)a2 description:(id)a3 useSystemKeychain:(char)a4 enforcePersonalPersona:(char)a5 group:(id)a6;
+ (struct __SecCertificate { } *)retrieveAttestationCertWithGroup:(id)a0 label:(id)a1;
+ (struct __SecIdentity { } *)retrieveAttestationIdentityWithGroup:(id)a0 label:(id)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)retrieveAttestationKeyWithGroup:(id)a0 label:(id)a1;
+ (id)retrieveAttestationMetadataWithGroup:(id)a0 service:(id)a1;
+ (id)saveItem:(void *)a0 withLabel:(id)a1 group:(id)a2 useSystemKeychain:(char)a3 enforcePersonalPersona:(char)a4;
+ (char)setData:(id)a0 forService:(id)a1 account:(id)a2 label:(id)a3 description:(id)a4 access:(void *)a5 group:(id)a6 useSystemKeychain:(char)a7 sysBound:(char)a8 enforcePersonalPersona:(char)a9 outError:(id *)a10;
+ (char)storeAttestationCert:(struct __SecCertificate { } *)a0 withGroup:(id)a1 label:(id)a2;
+ (char)storeAttestationKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 withGroup:(id)a1 label:(id)a2;
+ (char)storeAttestationMetadata:(id)a0 withGroup:(id)a1 service:(id)a2;
+ (id)stringFromServiceData:(id)a0;

@end
