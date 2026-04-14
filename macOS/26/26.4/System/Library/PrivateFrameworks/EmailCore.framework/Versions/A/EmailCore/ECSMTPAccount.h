@interface ECSMTPAccount : ECAccount

+ (id)standardSSLPorts;
+ (id)standardPorts;

- (id)usesSSLObject;
- (long long)defaultPortNumber;
- (id)portNumberObject;
- (id)_hostnameFromParentAccount:(id)a0;

@end
