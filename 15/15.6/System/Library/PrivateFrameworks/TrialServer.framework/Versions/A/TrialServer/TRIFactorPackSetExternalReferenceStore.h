@class TRIServerContext;

@interface TRIFactorPackSetExternalReferenceStore : NSObject <TRIPathReferencing> {
    TRIServerContext *_context;
}

- (void).cxx_destruct;
- (char)hasReferenceToPath:(id)a0;
- (id)initWithServerContext:(id)a0;

@end
