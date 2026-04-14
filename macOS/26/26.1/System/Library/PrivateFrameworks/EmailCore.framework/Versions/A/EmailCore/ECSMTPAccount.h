@interface ECSMTPAccount : ECAccount

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (id)usesSSLObject;
- (id)portNumberObject;
- (id)_hostnameFromParentAccount:(id)a0;
- (long long)defaultPortNumber;

@end
