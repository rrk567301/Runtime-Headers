@class FLFollowUpController;

@interface SUOSUFollowUpHelper : NSObject

@property (class, readonly) FLFollowUpController *controller;

+ (id)_createSoftwareUpdateFollowUpItem:(unsigned long long)a0;
+ (id)_createSplatFollowUpItem;
+ (BOOL)clearFollowUp;
+ (BOOL)postFollowUp:(unsigned long long)a0;

@end
