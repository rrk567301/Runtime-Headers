@class NSDictionary;

@interface SGTKindHelper : NSObject {
    NSDictionary *typeNames;
    NSDictionary *contentTypeToTypeName;
    NSDictionary *typeToContentTypes;
}

+ (id)sharedKindHelper;

- (id)init;
- (void).cxx_destruct;
- (id)normalizedValueForContentType:(id)a0 kindProposition:(id)a1 values:(id *)a2 excludeDynamic:(char)a3;

@end
