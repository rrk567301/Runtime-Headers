@class NSSet, NSDictionary;

@interface BMDSLGraphValidator : NSObject

@property (class, readonly) NSSet *genericValidKeyPaths;
@property (class, readonly) NSSet *legacyValidKeyPaths;

@property (readonly, nonatomic) char passthrough;
@property (readonly, copy, nonatomic) NSSet *validKeyPaths;
@property (readonly, copy, nonatomic) NSSet *allowedOperations;
@property (readonly, copy, nonatomic) NSSet *allowedStreamTypes;
@property (readonly, copy, nonatomic) NSDictionary *eventStreamClassMapping;

+ (id)currentProcessValidator;
+ (void)setCurrentProcessValidator:(id)a0;
+ (id)passthroughValidator;

- (id)init;
- (void).cxx_destruct;
- (Class)eventClassForString:(id)a0;
- (id)initWithValidKeyPaths:(id)a0 allowedOperations:(id)a1 allowedStreamTypes:(id)a2 eventStreamClassMapping:(id)a3;
- (char)isExecutionAllowedForGraph:(id)a0;
- (char)isStreamTypeAllowed:(unsigned long long)a0;

@end
