@class NSString;

@interface CPForegroundApplication : NSObject {
    void /* unknown type, empty encoding */ bundleIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ applicationType;
@property (nonatomic, readonly) NSString *localizedApplicationName;

- (id)init;
- (void).cxx_destruct;

@end
