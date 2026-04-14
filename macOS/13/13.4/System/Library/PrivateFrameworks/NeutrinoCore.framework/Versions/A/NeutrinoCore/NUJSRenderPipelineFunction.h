@class NSDictionary, NSString;

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction {
    NSDictionary *_params;
    NSString *_source;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)evaluate:(id)a0 error:(out id *)a1;
- (id)initWithParameters:(id)a0 source:(id)a1;
- (BOOL)isEqualToFunction:(id)a0;

@end
