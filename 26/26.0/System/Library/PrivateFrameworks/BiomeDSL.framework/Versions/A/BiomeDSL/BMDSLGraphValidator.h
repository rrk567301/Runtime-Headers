@class NSDictionary, NSSet;

@interface BMDSLGraphValidator : NSObject

@property (class, readonly) NSDictionary *legacyStreamClassMapping;
@property (class, readonly) NSSet *genericValidKeyPaths;
@property (class, readonly) NSSet *legacyValidKeyPaths;

@property (readonly, nonatomic) BOOL passthrough;
@property (readonly, copy, nonatomic) NSSet *validKeyPaths;
@property (readonly, copy, nonatomic) NSSet *allowedOperations;
@property (readonly, copy, nonatomic) NSSet *allowedStreamTypes;
@property (readonly, copy, nonatomic) NSDictionary *eventStreamClassMapping;

+ (id)passthroughValidator;
+ (id)currentProcessValidator;
+ (void)setCurrentProcessValidator:(id)a0;

- (BOOL)isStreamTypeAllowed:(unsigned long long)a0;
- (BOOL)isExecutionAllowedForGraph:(id)a0;
- (id)init;
- (Class)eventClassForString:(id)a0;
- (id)initWithValidKeyPaths:(id)a0 allowedOperations:(id)a1 allowedStreamTypes:(id)a2 eventStreamClassMapping:(id)a3;
- (void).cxx_destruct;

@end
