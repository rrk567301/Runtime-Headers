@class NSScene, NSString, NSSceneConfiguration, NSDictionary;

@interface NSSceneSession : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ underlyingPersistentIdentifier;
    void /* unknown type, empty encoding */ underlyingScene;
    void /* unknown type, empty encoding */ underlyingConfiguration;
    void /* function */ userInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, readonly) NSScene *scene;
@property (nonatomic, readonly) NSSceneConfiguration *configuration;
@property (nonatomic, copy) NSDictionary *userInfo;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPersistentIdentifier:(id)a0;

@end
