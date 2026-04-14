@interface PCPersistentIdentifiers : NSObject

+ (unsigned long long)hostUniqueIdentifier;
+ (id)_processNamePrefix;
+ (id)processNameAndPidIdentifier;
+ (id)processNamePidAndStringIdentifier:(id)a0;
+ (int)pidFromMatchingIdentifer:(id)a0;

@end
