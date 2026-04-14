@class NSArray, STMOpaqueExtension;
@protocol NSCopying;

@interface STMExtensionOperation : STMOperation

@property (copy) NSArray *returnedItems;
@property (copy) id<NSCopying> requestIdentifier;
@property (readonly, copy, nonatomic) NSArray *allInputItems;
@property (retain) STMOpaqueExtension *extension;
@property (copy) NSArray *inputItems;

+ (id)commandName;
+ (void)requestWithIdentifier:(id)a0 didCancelWithError:(id)a1;
+ (void)requestWithIdentifier:(id)a0 didCompleteWithItems:(id)a1;
+ (void)requestWithIdentifierWasInterrupted:(id)a0;
+ (id)resultsByRequestIdentifier;

- (void).cxx_destruct;
- (void)main;
- (void)requestDidComplete:(id)a0;
- (void)requestDidFailToBeginWithError:(id)a0;
- (BOOL)tryFinishWithRequestIdentifier:(id)a0;
- (id)commandInputItem;
- (void)finishWithItems:(id)a0;
- (void)requestDidBeginWithRequestIdentifier:(id)a0;
- (void)requestDidCancel:(id)a0;
- (void)requestWasInterrupted:(id)a0;

@end
