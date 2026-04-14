@class AMSDialogRequest;

@interface ASCSystemAlertDialogTask : AMSTask

@property (nonatomic) long long defaultButtonIndex;
@property (nonatomic) BOOL shouldDisplayAsTopMost;
@property (readonly, nonatomic) AMSDialogRequest *request;

- (id)present;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (struct __CFDictionary { } *)createConfigurationWithKeys:(struct ButtonKey { struct __CFString *x0; int x1; }[3])a0 buttonActions:(id)a1 outOptions:(unsigned long long *)a2;
- (id)resultForUserNotification:(struct __CFUserNotification { } *)a0 buttonActions:(id)a1 keys:(struct ButtonKey { struct __CFString *x0; int x1; }[3])a2;

@end
