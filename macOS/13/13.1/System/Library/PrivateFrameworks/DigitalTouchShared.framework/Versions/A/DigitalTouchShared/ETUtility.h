@interface ETUtility : NSObject

+ (id)dateFormatWithMilliseconds:(id)a0;
+ (id)destinationFromMessageIdentifier:(id)a0 keepPrefix:(BOOL)a1;
+ (id)removePrefixFromDestination:(id)a0;
+ (BOOL)isRetailDemo;
+ (BOOL)shouldArchiveSentMessages;
+ (long long)lastInteractiveZoomLevel;

@end
