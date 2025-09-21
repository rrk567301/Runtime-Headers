@class NSString, EMMessageRepository, MUICachingSVGConverter, NSObject;
@protocol OS_os_log, EFScheduler;

@interface MUIBrandIndicatorProvider : NSObject <EFLoggable, EFSignpostable, MUIBIMIProvider>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) EMMessageRepository *messageRepository;
@property (readonly, nonatomic) MUICachingSVGConverter *svgConverter;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

- (void).cxx_destruct;
- (void)bimiLogoFromLocation:(id)a0 handler:(id /* block */)a1;
- (void)bimiLogoFromLocation:(id)a0 size:(struct CGSize { double x0; double x1; })a1 handler:(id /* block */)a2;
- (id)brandIndicatorFutureForLocation:(id)a0;
- (id)brandIndicatorFutureForLocation:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithMessageRepository:(id)a0 svgConverter:(id)a1;

@end
