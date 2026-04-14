@interface ECSMTPAccount : ECAccount

+ (id)standardSSLPorts;
+ (id)standardPorts;

- (long long)defaultPortNumber;
- (id)usesSSLObject;
- (id)portNumberObject;
- (id)_hostnameFromParentAccount:(id)a0;

@end
