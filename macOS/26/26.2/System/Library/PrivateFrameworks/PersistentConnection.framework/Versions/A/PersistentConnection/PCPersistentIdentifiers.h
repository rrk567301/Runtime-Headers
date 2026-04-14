@interface PCPersistentIdentifiers : NSObject

+ (id)processNameAndPidIdentifier;
+ (unsigned long long)hostUniqueIdentifier;
+ (id)processNamePidAndStringIdentifier:(id)a0;
+ (id)_processNamePrefix;
+ (int)pidFromMatchingIdentifer:(id)a0;

@end
