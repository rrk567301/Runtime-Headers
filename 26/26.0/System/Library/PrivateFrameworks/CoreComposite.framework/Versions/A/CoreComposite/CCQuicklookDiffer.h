@class NSString, CCQuicklookBuilder;

@interface CCQuicklookDiffer : NSObject {
    CCQuicklookBuilder *_builder1;
    CCQuicklookBuilder *_builder2;
    NSString *_firstLabel;
    NSString *_secondLabel;
    BOOL _verbose;
}

+ (id)nestedLabel:(id)a0 forLabel:(id)a1;

- (id)header;
- (void).cxx_destruct;
- (id)toHTML:(id)a0;
- (id)diffTextureQuicklook:(id)a0 with:(id)a1 forMember:(id)a2 context:(id)a3;
- (id)initWithFirstVisitable:(id)a0 firstLabel:(id)a1 secondVisitable:(id)a2 secondLabel:(id)a3 verbose:(BOOL)a4;

@end
