@class NSString, NSPopUpButtonCell;

@interface ABDropDownMenuUIAction : NSObject <ABUserInterfaceAction> {
    NSPopUpButtonCell *_popUpCell;
}

@property (readonly, nonatomic) char requiresAuthorizationBeforeExecution;
@property (nonatomic) char executionWasAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
