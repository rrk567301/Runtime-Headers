@class NSData;

@interface _WKAuthenticationExtensionsClientOutputs : NSObject {
    struct RetainPtr<NSData> { NSData *m_ptr; } _prfFirst;
    struct RetainPtr<NSData> { NSData *m_ptr; } _prfSecond;
}

@property (readonly, nonatomic) BOOL appid;
@property (readonly, nonatomic) BOOL prfEnabled;
@property (readonly, copy, nonatomic) NSData *prfFirst;
@property (readonly, copy, nonatomic) NSData *prfSecond;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithAppid:(BOOL)a0;
- (id)initWithAppid:(BOOL)a0 prfEnabled:(BOOL)a1 prfFirst:(id)a2 prfSecond:(id)a3;

@end
