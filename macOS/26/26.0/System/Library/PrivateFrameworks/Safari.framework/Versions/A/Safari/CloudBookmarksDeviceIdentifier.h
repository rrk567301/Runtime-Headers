@class NSString;

@interface CloudBookmarksDeviceIdentifier : NSObject {
    NSString *_salt;
}

@property (readonly, copy, nonatomic) NSString *stringValue;

+ (void)_resetStoredSalt;
+ (id)_storedSaltCreatingIfNeeded;
+ (void)resetStandardIdentifier;
+ (id)standardIdentifier;

- (void)_reset;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSalt:(id)a0;

@end
