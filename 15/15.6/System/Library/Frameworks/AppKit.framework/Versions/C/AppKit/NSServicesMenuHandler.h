@interface NSServicesMenuHandler : NSObject

+ (char)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
+ (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
+ (void)_taskDidFinish:(id)a0;
+ (id)_computeErrorForErrorCode:(long long)a0 serviceName:(id)a1 appIdentifier:(id)a2 launchError:(int)a3 appURL:(id)a4 isWorkflow:(char)a5 additionalWorkflowErrorString:(id)a6 isShortcut:(char)a7 shortcutError:(id)a8;
+ (void)_configureServicesMenu:(id)a0;
+ (char)_performServiceFromDictionary:(id)a0 withPasteboard:(id)a1;
+ (char)_performServiceFromEntry:(id)a0 withPasteboard:(id)a1 withRequestor:(id)a2 withInvocationSourceType:(unsigned long long)a3;
+ (char)_performServiceFromEntry:(id)a0 withPasteboard:(id)a1 withRequestor:(id)a2 withInvocationSourceType:(unsigned long long)a3 withCarbonFocus:(void *)a4 withSendTypes:(id)a5 withReturnTypes:(id)a6 canReleasePasteboardImmediately:(char *)a7;
+ (char)_performServiceWithoutAlternatesFromEntry:(id)a0 withPasteboard:(id)a1 withRequestor:(id)a2 withInvocationSourceType:(unsigned long long)a3;
+ (id)_requestorStartingWithChain:(id)a0 forProposedSendTypes:(id)a1 proposedReturnTypes:(id)a2 sendTypes:(id *)a3 returnTypes:(id *)a4;
+ (long long)_runShortcutForServiceEntry:(id)a0 withPasteboard:(id)a1 invocationSourceType:(unsigned long long)a2 returnDataExpected:(char)a3 error:(id *)a4;
+ (long long)_runWorkflowForServiceEntry:(id)a0 withPasteboard:(id)a1 returnDataExpected:(char)a2 errorString:(id *)a3;
+ (void)addSendAndReturnTypesIfNotPresent;
+ (void)registerServicesMenuSendTypes:(id)a0 returnTypes:(id)a1;
+ (char)worksWhenModal;

@end
