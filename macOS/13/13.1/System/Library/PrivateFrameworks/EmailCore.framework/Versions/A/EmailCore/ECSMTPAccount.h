@interface ECSMTPAccount : ECAccount

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (id)_hostnameFromParentAccount:(id)a0;
- (id)portNumberObject;
- (long long)defaultPortNumber;
- (id)usesSSLObject;

@end
