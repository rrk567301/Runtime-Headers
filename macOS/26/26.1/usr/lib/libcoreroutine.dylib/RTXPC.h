@interface RTXPC : NSObject

+ (id)executablePathOfConnection:(id)a0;
+ (BOOL)clientCodeSignatureIsValid:(id)a0 error:(id *)a1;
+ (id)signingIdentifierOfConnection:(id)a0;

@end
