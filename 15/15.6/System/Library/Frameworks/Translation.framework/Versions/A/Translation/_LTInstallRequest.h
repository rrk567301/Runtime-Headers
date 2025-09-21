@class NSArray, NSObject;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue, _LTTranslationService;

@interface _LTInstallRequest : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_LTTranslationService> _service;
    id /* block */ _done;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSArray *locales;
@property (nonatomic) char useCellular;
@property (weak, nonatomic) id<_LTSpeechTranslationDelegate> delegate;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocales:(id)a0 useCellular:(char)a1 progressHandler:(id /* block */)a2;
- (void)_startInstallationWithService:(id)a0 done:(id /* block */)a1;
- (id)initWithLocales:(id)a0 useCellular:(char)a1;
- (id)initWithLocales:(id)a0 useCellular:(char)a1 delegate:(id)a2;
- (void)languageInstallProgressed:(id)a0 error:(id)a1;

@end
