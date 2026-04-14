@interface DDSignatureMapController : DDSignaturePreviewController

+ (unsigned long long)customContentType;
+ (BOOL)actionValidForDataDetectorsResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (id)localizedDynamicName;
+ (struct __DDResult { } *)extractFromSignatureIfNeeded:(struct __DDResult { } *)a0;

@end
