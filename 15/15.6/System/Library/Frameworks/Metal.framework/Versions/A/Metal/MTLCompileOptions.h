@class NSString, NSDictionary, NSArray;

@interface MTLCompileOptions : NSObject <NSCopying>

@property (nonatomic) char tracingEnabled;
@property (nonatomic) char framebufferReadEnabled;
@property (nonatomic) char debuggingEnabled;
@property (nonatomic) char compileTimeStatisticsEnabled;
@property (copy, nonatomic) NSString *additionalCompilerArguments;
@property (nonatomic) unsigned char sourceLanguage;
@property (copy, nonatomic) NSDictionary *preprocessorMacros;
@property (nonatomic) char fastMathEnabled;
@property (nonatomic) long long mathMode;
@property (nonatomic) long long mathFloatingPointFunctions;
@property (nonatomic) unsigned long long languageVersion;
@property (nonatomic) long long libraryType;
@property (copy, nonatomic) NSString *installName;
@property (copy, nonatomic) NSArray *libraries;
@property (nonatomic) char preserveInvariance;
@property (nonatomic) long long optimizationLevel;
@property (nonatomic) long long compileSymbolVisibility;
@property (nonatomic) char allowReferencingUndefinedSymbols;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic) char enableLogging;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
