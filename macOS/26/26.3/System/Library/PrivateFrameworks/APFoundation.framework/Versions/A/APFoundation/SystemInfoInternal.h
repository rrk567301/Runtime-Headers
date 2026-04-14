@class NSString;

@interface SystemInfoInternal : NSObject <APSystemInfoProviding> {
    void /* unknown type, empty encoding */ firstRunSinceRebootLock;
    void /* unknown type, empty encoding */ _firstRunSinceReboot;
}

@property (class, nonatomic, readonly) SystemInfoInternal *shared;

@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *osVersionAndBuild;
@property (nonatomic, readonly) NSString *osIdentifier;
@property (nonatomic, readonly) NSString *osName;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *modelType;
@property (nonatomic, readonly) BOOL isFirstRunSinceReboot;
@property (nonatomic, readonly) NSString *longBuildVersion;
@property (nonatomic, readonly) NSString *shortBuildVersion;
@property (nonatomic, readonly) NSString *systemDescription;
@property (nonatomic, readonly) NSString *locale;

- (id)init;
- (void).cxx_destruct;

@end
