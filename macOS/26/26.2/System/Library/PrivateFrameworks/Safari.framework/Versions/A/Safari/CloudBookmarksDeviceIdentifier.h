@class NSString;

@interface CloudBookmarksDeviceIdentifier : NSObject

@property (readonly, copy, nonatomic) NSString *stringValue;

+ (void)resetStandardIdentifier;
+ (id)standardIdentifier;

- (void)_reset;

@end
