@interface PCPersistentIdentifiers : NSObject

+ (unsigned long long)hostUniqueIdentifier;
+ (id)processNameAndPidIdentifier;
+ (id)processNamePidAndStringIdentifier:(id)a0;
+ (int)pidFromMatchingIdentifer:(id)a0;
+ (id)_processNamePrefix;

@end
