@class NSString;

@interface DDBasicRegexp : NSObject <NSCopying> {
    NSString *_humanReadableName;
}

+ (id)epsilon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (id)prettyPrintWithPriority:(int)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (id)effectiveArgument;
- (id)humanReadableName;
- (void)setHumanReadableName:(id)a0;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;
- (id)monElement;
- (id)computeTypeFromParent:(id)a0 withManager:(id)a1;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;

@end
