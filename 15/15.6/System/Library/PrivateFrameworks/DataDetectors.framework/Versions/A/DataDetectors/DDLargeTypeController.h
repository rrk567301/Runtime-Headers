@class NSString, DDPhoneNumber;

@interface DDLargeTypeController : NSObject <NSWindowDelegate, DDMiscActionProtocol> {
    DDPhoneNumber *_number;
    id _retainedSelf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)requiresService;
+ (char)actionValidForDataDetectorsResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (char)displaysNonModalUI;
+ (char)requiresViewBridge;
+ (id)runActionWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;

@end
