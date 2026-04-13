@interface ECSMTPAccount : ECAccount

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (id)_hostnameFromParentAccount:(id)a0;
- (id)portNumberObject;
- (id)usesSSLObject;
- (long long)defaultPortNumber;

@end
