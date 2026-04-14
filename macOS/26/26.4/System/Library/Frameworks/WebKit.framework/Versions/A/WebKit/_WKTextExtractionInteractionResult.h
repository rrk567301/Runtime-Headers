@class NSError;

@interface _WKTextExtractionInteractionResult : NSObject {
    struct RetainPtr<NSError> { NSError *m_ptr; } _error;
}

@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithErrorDescription:(id)a0;

@end
