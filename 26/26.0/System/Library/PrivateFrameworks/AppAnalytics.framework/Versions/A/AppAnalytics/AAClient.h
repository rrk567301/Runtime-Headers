@class NSString;

@interface AAClient : NSObject {
    void /* function */ identifier;
    void /* function */ name;
    void /* function */ version;
    void /* function */ buildNumber;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) long long build;
@property (nonatomic, readonly) NSString *buildNumber;
@property (nonatomic, readonly) NSString *fullVersion;

- (id)initWithBundle:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0 name:(id)a1 version:(id)a2 buildNumber:(id)a3;
- (id)initWithIdentifier:(id)a0 name:(id)a1 version:(id)a2 build:(long long)a3;
- (void).cxx_destruct;

@end
