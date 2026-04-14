@interface BMPublicStreamUtilities : NSObject

+ (id)allowedStreamWriteIdentifiersForStream:(long long)a0;
+ (unsigned long long)domainForStream:(long long)a0;
+ (long long)streamForStreamIdentifier:(id)a0;
+ (id)streamIdentifierForStream:(long long)a0;
+ (id)streamIdentifiers;
+ (BOOL)writeAllowedForStream:(long long)a0 processIdentifier:(id)a1;

@end
