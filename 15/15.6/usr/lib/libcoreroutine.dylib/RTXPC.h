@interface RTXPC : NSObject

+ (char)clientCodeSignatureIsValid:(id)a0 error:(id *)a1;
+ (id)executablePathOfConnection:(id)a0;
+ (id)signingIdentifierOfConnection:(id)a0;

@end
