@interface TCEligibilityUtilities : NSObject

+ (BOOL)commonEligibilityCheckForSmartGeneration:(id)a0 inputContextHistory:(id)a1 outError:(id *)a2;
+ (id)previousContextHistoryFor:(id)a0 replyToMessageID:(id)a1;

@end
