@interface PCPersistentIdentifiers : NSObject

+ (unsigned long long)hostUniqueIdentifier;
+ (id)processNamePidAndStringIdentifier:(id)a0;
+ (id)_processNamePrefix;
+ (id)processNameAndPidIdentifier;
+ (int)pidFromMatchingIdentifer:(id)a0;

@end
