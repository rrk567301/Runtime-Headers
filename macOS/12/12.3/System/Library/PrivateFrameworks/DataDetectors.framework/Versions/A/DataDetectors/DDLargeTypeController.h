@class NSString, DDPhoneNumber;

@interface DDLargeTypeController : NSObject <NSWindowDelegate, DDMiscActionProtocol> {
    DDPhoneNumber *_number;
    id _retainedSelf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runActionWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (BOOL)displaysNonModalUI;
+ (BOOL)requiresService;
+ (BOOL)requiresViewBridge;
+ (BOOL)actionValidForDataDetectorsResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;

@end
