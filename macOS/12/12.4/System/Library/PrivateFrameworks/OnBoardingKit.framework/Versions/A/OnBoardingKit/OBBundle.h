@class NSString, NSBundle;

@interface OBBundle : NSObject

@property (nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) NSBundle *underlyingBundle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSBundle *bundle;

+ (id)bundleWithIdentifier:(id)a0;
+ (id)bundleAtPath:(id)a0;
+ (id)bundleAtPath:(id)a0 placeholderIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (id)privacyFlow;
- (id)initWithBundle:(id)a0 placeholderIdentifier:(id)a1;

@end
