@class NSString, NSBundle, NSArray;

@interface OBBundle : NSObject

@property (nonatomic) char isPlaceholder;
@property (readonly, nonatomic) NSBundle *underlyingBundle;
@property (nonatomic) char isLinkBundle;
@property (nonatomic) char isReplacementBundle;
@property (retain, nonatomic) NSString *replacementPreconditionCache;
@property (retain, nonatomic) NSArray *replaceeIdentifierSetsCache;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSBundle *bundle;

+ (id)bundleWithIdentifier:(id)a0;
+ (id)bundleAtPath:(id)a0;
+ (id)bundleAtPath:(id)a0 isLinkBundle:(char)a1 isReplacementBundle:(char)a2;
+ (id)bundleAtPath:(id)a0 placeholderIdentifier:(id)a1;
+ (id)identifierWithName:(id)a0;
+ (id)nameFromIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (id)privacyFlow;
- (id)initWithBundle:(id)a0 isLinkBundle:(char)a1 isReplacementBundle:(char)a2;
- (id)initWithBundle:(id)a0 placeholderIdentifier:(id)a1;

@end
