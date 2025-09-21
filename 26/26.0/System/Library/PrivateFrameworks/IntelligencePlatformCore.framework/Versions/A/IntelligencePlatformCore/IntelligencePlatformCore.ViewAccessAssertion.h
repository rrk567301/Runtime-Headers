@class NSString, NSURL;

@interface IntelligencePlatformCore.ViewAccessAssertion : NSObject <GDViewAccessAssertion> {
    void /* function */ viewName;
    void /* unknown type, empty encoding */ viewArtifactURL;
    void /* function */ viewArtifactTableName;
}

@property (nonatomic, readonly) NSString *viewName;
@property (nonatomic, readonly) NSURL *viewArtifactURL;
@property (nonatomic, readonly) NSString *viewArtifactTableName;
@property (nonatomic, readonly) BOOL alwaysAvailable;

- (id)init;
- (void).cxx_destruct;

@end
