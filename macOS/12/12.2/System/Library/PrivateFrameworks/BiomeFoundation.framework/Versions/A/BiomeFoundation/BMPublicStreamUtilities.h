@interface BMPublicStreamUtilities : NSObject

+ (id)streamIdentifierForStream:(long long)a0;
+ (id)allowedStreamWriteIdentifiersForStream:(long long)a0;
+ (id)streamIdentifiers;
+ (long long)streamForStreamIdentifier:(id)a0;
+ (BOOL)writeAllowedForStream:(long long)a0 processIdentifier:(id)a1;

@end
