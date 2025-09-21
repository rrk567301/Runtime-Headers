@interface ETUtility : NSObject

+ (id)dateFormatWithMilliseconds:(id)a0;
+ (id)destinationFromMessageIdentifier:(id)a0 keepPrefix:(char)a1;
+ (char)isRetailDemo;
+ (long long)lastInteractiveZoomLevel;
+ (id)removePrefixFromDestination:(id)a0;
+ (char)shouldArchiveSentMessages;

@end
