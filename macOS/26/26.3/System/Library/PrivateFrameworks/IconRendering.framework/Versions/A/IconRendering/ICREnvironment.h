@class NSString;

@interface ICREnvironment : NSObject {
    void /* function */ projectVersion;
    void /* function */ infoString;
}

@property (class, nonatomic, readonly) ICREnvironment *currentEnvironment;

@property (nonatomic, readonly) NSString *projectVersion;
@property (nonatomic, readonly) BOOL isUsingSoftwareRenderer;
@property (nonatomic, readonly) NSString *infoString;
@property (nonatomic, readonly) char *_shortInfoString;
@property (nonatomic) BOOL hasLoggedInfo;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (const char *)shortInfoString;

@end
