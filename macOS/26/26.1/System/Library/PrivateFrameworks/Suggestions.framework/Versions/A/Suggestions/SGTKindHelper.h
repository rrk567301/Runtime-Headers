@class NSDictionary;

@interface SGTKindHelper : NSObject {
    NSDictionary *typeNames;
    NSDictionary *contentTypeToTypeName;
    NSDictionary *typeToContentTypes;
}

+ (id)sharedKindHelper;

- (void).cxx_destruct;
- (id)init;
- (id)normalizedValueForContentType:(id)a0 kindProposition:(id)a1 values:(id *)a2 excludeDynamic:(BOOL)a3;

@end
