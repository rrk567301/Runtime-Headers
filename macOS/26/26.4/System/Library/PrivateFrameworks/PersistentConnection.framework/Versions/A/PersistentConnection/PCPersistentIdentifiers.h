@interface PCPersistentIdentifiers : NSObject

+ (unsigned long long)hostUniqueIdentifier;
+ (id)processNamePidAndStringIdentifier:(id)a0;
+ (id)_processNamePrefix;
+ (int)pidFromMatchingIdentifer:(id)a0;
+ (id)processNameAndPidIdentifier;

@end
