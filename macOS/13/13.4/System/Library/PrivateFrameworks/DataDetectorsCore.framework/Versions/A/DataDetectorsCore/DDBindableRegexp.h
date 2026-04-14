@class DDBinderInfo, DDBasicRegexp, DDLocation;

@interface DDBindableRegexp : NSObject <NSCopying> {
    DDBinderInfo *_binderInfo;
    DDBasicRegexp *_coreRegexp;
    DDLocation *_location;
}

@property BOOL nonSkippable;

+ (id)errorDictionary;
+ (id)bindableRegexpWithBasicRegexp:(id)a0 location:(id)a1;
+ (id)bindableRegexpWithBindableRegexp:(id)a0 extraBinder:(id)a1;
+ (id)bindableRegexpWithBindableRegexp:(id)a0 extraBinder:(id)a1 displayName:(id)a2;
+ (id)concatWithBinderAndRegexpes:(id)a0;
+ (id)disjunctionWithBinderAndRegexpes:(id)a0;
+ (id)errorEmptyPattern;
+ (id)errorInvalidRange;
+ (id)errorVariableNotFoundWithName:(id)a0;
+ (id)kleeneStarOfRegexp:(id)a0 binder:(id)a1;
+ (id)regexpMatchingBetweenFirstChar:(unsigned short)a0 endChar:(unsigned short)a1;
+ (id)regexpMatchingString:(id)a0;
+ (id)regexpMatchingString:(id)a0 binder:(id)a1;
+ (id)regexpMatchingString:(id)a0 binder:(id)a1 caseInsensitive:(BOOL)a2;
+ (id)regexpWithBasicRegexp:(id)a0 binder:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)location;
- (id)longDescription;
- (void)setLocation:(id)a0;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;
- (id)binderInfo;
- (id)binderName;
- (id)computeTypeWithManager:(id)a0;
- (id)coreRegexp;
- (id)effectiveArgument;
- (id)humanReadableName;
- (id)icuEquivalentWithManager:(id)a0;
- (id)initWithRegexp:(id)a0 binder:(id)a1;
- (id)initWithRegexp:(id)a0 binderInfo:(id)a1;
- (BOOL)isSimpleExpression;
- (struct __CFString { } *)locationFilename;
- (struct __DDExpressionPosition { int x0; int x1; int x2; int x3; })locationPosition;
- (id)monElement;
- (id)prettyPrint;
- (id)prettyPrintWithPriority:(int)a0;
- (void)setBinderInfo:(id)a0;
- (void)setCoreRegexp:(id)a0;
- (void)setLocationFilename:(struct __CFString { } *)a0 position:(struct __DDExpressionPosition { int x0; int x1; int x2; int x3; })a1;
- (int)splitRegexpWithDelegate:(id)a0;
- (id)symbolsInGrammar:(id)a0 withManager:(id)a1;

@end
