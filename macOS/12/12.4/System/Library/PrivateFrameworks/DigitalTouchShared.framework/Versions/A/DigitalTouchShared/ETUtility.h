@interface ETUtility : NSObject

+ (id)removePrefixFromDestination:(id)a0;
+ (id)dateFormatWithMilliseconds:(id)a0;
+ (id)destinationFromMessageIdentifier:(id)a0 keepPrefix:(BOOL)a1;
+ (BOOL)isRetailDemo;
+ (BOOL)shouldArchiveSentMessages;
+ (long long)lastInteractiveZoomLevel;

@end
