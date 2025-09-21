@interface ACDTCCUtilities : NSObject

+ (int)TCCStateForClient:(id)a0 accountTypeID:(id)a1;
+ (char)TCCSupportedForAccountTypeID:(id)a0;
+ (struct __CFString { } *)_TCCServiceForAccountTypeID:(id)a0;
+ (id)allTCCStatesForAccountTypeID:(id)a0;
+ (char)clearAllTCCStatesForAccountTypeID:(id)a0;
+ (char)clearTCCStateForClient:(id)a0 accountTypeID:(id)a1;
+ (char)setTCCStateForClient:(id)a0 accountTypeID:(id)a1 toGranted:(char)a2;

@end
