@interface PCPersistentIdentifiers : NSObject

+ (unsigned long long)hostUniqueIdentifier;
+ (id)processNameAndPidIdentifier;
+ (int)pidFromMatchingIdentifer:(id)a0;
+ (id)_processNamePrefix;
+ (id)processNamePidAndStringIdentifier:(id)a0;

@end
