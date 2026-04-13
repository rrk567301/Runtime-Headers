@class NSString;

@interface CloudBookmarksDeviceIdentifier : NSObject {
    NSString *_salt;
}

@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)standardIdentifier;
+ (void)resetStandardIdentifier;
+ (id)_storedSaltCreatingIfNeeded;
+ (void)_resetStoredSalt;

- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (id)initWithSalt:(id)a0;

@end
